#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32_multi_array.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "path_planner/msg/drone_status.hpp"
#include "map_manager/msg/map_state.hpp"
#include "path_planner/srv/start_simulation.hpp"
#include <queue>
#include <vector>
#include <limits>
#include <memory>

class DStarPlanner : public rclcpp::Node {
public:
    DStarPlanner()
        : Node("dstar_planner"), simulation_running_(false), energy_(1000.0), energy_per_meter_(1.0), passenger_capacity_(2), passengers_(0) {
        
        map_sub_ = this->create_subscription<map_manager::msg::MapState>(
            "map_state", 10, std::bind(&DStarPlanner::mapCallback, this, std::placeholders::_1));
        path_pub_ = this->create_publisher<std_msgs::msg::Int32MultiArray>("path_visualization", 10);
        status_pub_ = this->create_publisher<path_planner::msg::DroneStatus>("drone_status", 10);

        start_service_ = this->create_service<path_planner::srv::StartSimulation>(
            "start_simulation", std::bind(&DStarPlanner::startSimulation, this, std::placeholders::_1, std::placeholders::_2));
    }

private:
    bool simulation_running_;
    float energy_;
    float energy_per_meter_;
    int passenger_capacity_;
    int passengers_;

    rclcpp::Service<path_planner::srv::StartSimulation>::SharedPtr start_service_;
    rclcpp::Subscription<map_manager::msg::MapState>::SharedPtr map_sub_;
    rclcpp::Publisher<std_msgs::msg::Int32MultiArray>::SharedPtr path_pub_;
    rclcpp::Publisher<path_planner::msg::DroneStatus>::SharedPtr status_pub_;

    void startSimulation(const std::shared_ptr<path_planner::srv::StartSimulation::Request> request,
                         std::shared_ptr<path_planner::srv::StartSimulation::Response> response) {
        if (simulation_running_) {
            response->success = false;
            response->message = "Simulation is already running.";
            return;
        }

        energy_ = request->initial_energy > 0 ? request->initial_energy : 1000.0;
        energy_per_meter_ = request->energy_per_meter > 0 ? request->energy_per_meter : 1.0;
        passenger_capacity_ = request->passenger_capacity > 0 ? request->passenger_capacity : 2;
        passengers_ = 0;

        simulation_running_ = true;
        response->success = true;
        response->message = "Simulation started with energy: " + std::to_string(energy_) +
                            ", energy consumption: " + std::to_string(energy_per_meter_) +
                            ", passenger capacity: " + std::to_string(passenger_capacity_);
        RCLCPP_INFO(this->get_logger(), "Simulation Started!");
    }

    void mapCallback(const map_manager::msg::MapState::SharedPtr msg) {
        if (!simulation_running_) return;

        std::vector<int> grid = msg->grid_data;
        int width = msg->width, height = msg->height;
        
        std::vector<int> path = computeDStarPath(grid, width, height);
        float energy_needed = computeEnergy(path);

        std_msgs::msg::Int32MultiArray path_msg;
        path_msg.data = path;
        path_pub_->publish(path_msg);

        f

        map_manager::msg::DroneStatus status_msg;
        status_msg.energy = energy_;
        status_msg.passengers = passengers_;
        status_msg.position = (0.0, 0.0, 0.0)

        if (passengers_ >= passenger_capacity_ || energy_needed > energy_) {
            status_msg.status = "RETURN_TO_START";
            energy_ = 1000.0;
            passengers_ = 0;
        } else if (path.empty()) {
            status_msg.status = "DRONE_STUCK";
        } else {
            status_msg.status = "CONTINUE_MISSION";
            energy_ -= energy_needed;
            passengers_++;
        }
        status_pub_->publish(status_msg);
    }

    std::vector<int> computeDStarPath(const std::vector<int>& grid, int width, int height) {
        std::vector<int> path(grid.size(), std::numeric_limits<int>::max());
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> pq;
        
        int start_idx = 0;
        pq.emplace(0, start_idx);
        path[start_idx] = 0;

        std::vector<int> directions = {-1, 1, -width, width};
        while (!pq.empty()) {
            auto [cost, idx] = pq.top(); pq.pop();
            if (cost > path[idx]) continue;

            for (int d : directions) {
                int next_idx = idx + d;
                if (next_idx < 0 || next_idx >= grid.size() || grid[next_idx] == -1) continue;
                int new_cost = cost + 1;
                if (new_cost < path[next_idx]) {
                    path[next_idx] = new_cost;
                    pq.emplace(new_cost, next_idx);
                }
            }
        }
        return path;
    }

    float computeEnergy(const std::vector<int>& path) {
        return static_cast<float>(path.size()) * energy_per_meter_;
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DStarPlanner>());
    rclcpp::shutdown();
    return 0;
}

