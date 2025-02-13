#include "rclcpp/rclcpp.hpp"
#include "map_manager/srv/add_obstacle.hpp"  // Pastikan header service yang benar

#include <memory>

using namespace std::chrono_literals;

void add_obstacle(
  const std::shared_ptr<map_manager::srv::AddObstacle::Request> request,
  std::shared_ptr<map_manager::srv::AddObstacle::Response> response)
{
  // Logika penambahan obstacle
  bool is_valid = true;
  std::string status_message = "Obstacle added successfully";
  
  // Contoh validasi sederhana
  if(request->x < 0 || request->x > 100) {
    is_valid = false;
    status_message = "Invalid X coordinate";
  }
  
  if(request->y < 0 || request->y > 100) {
    is_valid = false;
    status_message = "Invalid Y coordinate";
  }

  // Konversi waktu dari detik (float) ke nanoseconds
  auto sleep_duration = std::chrono::duration_cast<std::chrono::nanoseconds>(
    std::chrono::duration<float>(request->time));

  // Simulasi delay berdasarkan waktu
  rclcpp::sleep_for(sleep_duration);
  
  response->success = is_valid;
  response->message = status_message;

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), 
    "Request received - X: %d, Y: %d, Time: %.2f", 
    request->x, request->y, request->time);
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  
  auto node = std::make_shared<rclcpp::Node>("obstacle_service_server");
  
  auto service = node->create_service<map_manager::srv::AddObstacle>(
    "add_obstacle", 
    &add_obstacle);

  RCLCPP_INFO(node->get_logger(), 
    "Obstacle Service Server ready to receive requests...");
  
  rclcpp::spin(node);
  rclcpp::shutdown();
}