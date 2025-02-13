// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <vector>
#include <cstdlib>

#include "rclcpp/rclcpp.hpp"
#include "map_manager/msg/map_state.hpp"
#include "map_manager/srv/add_obstacle.hpp"
#include "map_manager/srv/add_victim.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class MapPublisher : public rclcpp::Node
{
public:
  MapPublisher()
  : Node("map_publisher")
  {
    initialize_map();      // Inisialisasi peta awal
    publisher_ = this->create_publisher<std_msgs::msg::String>("map_state", 10);

    // Service untuk menambahkan obstacle
    add_obstacle_service_ = this->create_service<map_manager::srv::AddObstacle>(
      "add_obstacle",
      std::bind(&MapPublisher::add_obstacle_callback, this, std::placeholders::_1, std::placeholders::_2));

    // Service untuk menambahkan korban
    add_victim_service_ = this->create_service<map_manager::srv::AddVictim>(
      "add_victim",
      std::bind(&MapPublisher::add_victim_callback, this, std::placeholders::_1, std::placeholders::_2));

    timer_ = this->create_wall_timer(
      500ms, std::bind(&MapPublisher::timer_callback, this));
  }

private:
  std::vector<std::vector<std::string>> map_;
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Service<map_manager::srv::AddObstacle>::SharedPtr add_obstacle_service_;
  rclcpp::Service<map_manager::srv::AddVictim>::SharedPtr add_victim_service_;

  std::chrono::milliseconds timer_interval_; // Interval timer dalam milidetik

  void initialize_map() {
    // Peta awal dengan 's' sebagai start point
    map_ = {
      {"-", "-", "-", "-", "-", "-", "k", "-"},
      {"-", "-", "o", "o", "o", "-", "-", "-"},
      {"-", "-", "k", "-", "-", "-", "-", "-"},
      {"-", "-", "-", "-", "o", "-", "-", "-"},
      {"-", "o", "o", "-", "-", "-", "-", "-"},
      {"-", "-", "o", "o", "o", "-", "-", "-"},
      {"-", "s", "-", "-", "-", "-", "-", "-"},
      {"-", "-", "-", "-", "-", "-", "-", "-"}
    };
  }

  bool is_valid_position(int x, int y) {
    return (x >= 0 && x < 8 && y >= 0 && y < 8 && map_[x][y] == "-");
  }

  void add_element(int x, int y, const std::string& type) {
    if (is_valid_position(x, y)) {
      map_[x][y] = type;
    }
  }

  void add_obstacle_callback(
    const std::shared_ptr<map_manager::srv::AddObstacle::Request> request,
    std::shared_ptr<map_manager::srv::AddObstacle::Response> response) {
    int x = request->x;
    int y = request->y;

    if (is_valid_position(x, y)) {
      add_element(x, y, "o");
      response->success = true;
      response->message = "Obstacle added successfully at (" + std::to_string(x) + ", " + std::to_string(y) + ")";
    } else {
      response->success = false;
      response->message = "Invalid position for obstacle at (" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }

    // Update timer interval berdasarkan waktu dari service
    timer_interval_ = std::chrono::milliseconds(static_cast<int>(request->time * 1000));
    reset_timer();
  }

  void add_victim_callback(
    const std::shared_ptr<map_manager::srv::AddVictim::Request> request,
    std::shared_ptr<map_manager::srv::AddVictim::Response> response) {
    int x = request->x;
    int y = request->y;

    if (is_valid_position(x, y)) {
      add_element(x, y, "k");
      response->success = true;
      response->message = "Victim added successfully at (" + std::to_string(x) + ", " + std::to_string(y) + ")";
    } else {
      response->success = false;
      response->message = "Invalid position for victim at (" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }

    // Update timer interval berdasarkan waktu dari service
    timer_interval_ = std::chrono::milliseconds(static_cast<int>(request->time * 1000));
    reset_timer();
  }

  void reset_timer() {
    // Reset timer dengan interval baru
    timer_->cancel();
    timer_ = this->create_wall_timer(
      timer_interval_, std::bind(&MapPublisher::timer_callback, this));
  }

  std::string convert_map_to_string() {
    std::string map_str;
    for(const auto& row : map_) {
      for(const auto& cell : row) {
        map_str += cell + " ";
      }
      map_str += "\n";
    }
    return map_str;
  }

  void timer_callback()
  {
    auto msg = std_msgs::msg::String();
    msg.data = convert_map_to_string();
    RCLCPP_INFO(this->get_logger(), "Publishing Updated Map:\n%s", msg.data.c_str());
    publisher_->publish(msg);
  }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MapPublisher>());
  rclcpp::shutdown();
  return 0;
}