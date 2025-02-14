#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/trigger.hpp"
#include <memory>
#include <thread>
#include <cstdlib>

class SimulationService : public rclcpp::Node {
public:
  SimulationService()
  : Node("simulation_service"), simulation_running_(false) {
    start_service_ = this->create_service<std_srvs::srv::Trigger>(
      "/start_simulation", 
      std::bind(&SimulationService::start_simulation, this, std::placeholders::_1, std::placeholders::_2));
    
    stop_service_ = this->create_service<std_srvs::srv::Trigger>(
      "/stop_simulation", 
      std::bind(&SimulationService::stop_simulation, this, std::placeholders::_1, std::placeholders::_2));
    
    RCLCPP_INFO(this->get_logger(), "Simulation Service Ready");
  }

private:
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr start_service_;
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr stop_service_;
  std::shared_ptr<std::thread> simulation_thread_;
  bool simulation_running_;

  void start_simulation(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                        std::shared_ptr<std_srvs::srv::Trigger::Response> response) {
    (void) request;
    if (simulation_running_) {
      response->success = false;
      response->message = "Simulation is already running.";
      return;
    }
    
    RCLCPP_INFO(this->get_logger(), "Starting Simulation...");
    simulation_thread_ = std::make_shared<std::thread>([this]() {
      system("ros2 run map_manager map_publish");
    });
    simulation_running_ = true;
    response->success = true;
    response->message = "Simulation started.";
  }

  void stop_simulation(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                       std::shared_ptr<std_srvs::srv::Trigger::Response> response) {
    (void) request;
    if (!simulation_running_) {
      response->success = false;
      response->message = "Simulation is already stopped.";
      return;
    }
    
    RCLCPP_INFO(this->get_logger(), "Stopping Simulation...");
    system("pkill -f map_publish");
    simulation_running_ = false;
    response->success = true;
    response->message = "Simulation stopped.";
  }
};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SimulationService>());
  rclcpp::shutdown();
  return 0;
}
