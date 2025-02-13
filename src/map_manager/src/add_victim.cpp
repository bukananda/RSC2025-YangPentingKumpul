#include "rclcpp/rclcpp.hpp"
#include "map_manager/srv/add_victim.hpp"  // Pastikan header service yang benar

#include <memory>

using namespace std::chrono_literals;

void add_Victim(
  const std::shared_ptr<map_manager::srv::AddVictim::Request> request,
  std::shared_ptr<map_manager::srv::AddVictim::Response> response)
{
  // Logika penambahan Victim
  bool is_valid = true;
  std::string status_message = "Victim added successfully";
  
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
  
  auto node = std::make_shared<rclcpp::Node>("Victim_service_server");
  
  auto service = node->create_service<map_manager::srv::AddVictim>(
    "add_Victim", 
    &add_Victim);

  RCLCPP_INFO(node->get_logger(), 
    "Victim Service Server ready to receive requests...");
  
  rclcpp::spin(node);
  rclcpp::shutdown();
}