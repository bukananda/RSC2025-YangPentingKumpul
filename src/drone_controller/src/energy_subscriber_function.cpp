#include <chrono>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"

class EnergySubscriber : public rclcpp::Node {
public:
    EnergySubscriber() : Node("energy_subscriber") {
        subscription_ = this->create_subscription<std_msgs::msg::Int32>(
            "current_energy", 10, std::bind(&EnergySubscriber::energy_callback, this, std::placeholders::_1));
    }

private:
void energy_callback(const std_msgs::msg::Int32::SharedPtr msg) {
    if (msg->data == 0) {
        RCLCPP_WARN(this->get_logger(), "drone tidak bisa bergerak", msg->data);
    }
}

    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr subscription_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EnergySubscriber>());
    rclcpp::shutdown();
    return 0;
}
