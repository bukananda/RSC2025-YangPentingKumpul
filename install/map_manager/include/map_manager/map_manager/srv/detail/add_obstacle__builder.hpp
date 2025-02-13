// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from map_manager:srv/AddObstacle.idl
// generated code does not contain a copyright notice

#ifndef MAP_MANAGER__SRV__DETAIL__ADD_OBSTACLE__BUILDER_HPP_
#define MAP_MANAGER__SRV__DETAIL__ADD_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "map_manager/srv/detail/add_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace map_manager
{

namespace srv
{

namespace builder
{

class Init_AddObstacle_Request_time
{
public:
  explicit Init_AddObstacle_Request_time(::map_manager::srv::AddObstacle_Request & msg)
  : msg_(msg)
  {}
  ::map_manager::srv::AddObstacle_Request time(::map_manager::srv::AddObstacle_Request::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::map_manager::srv::AddObstacle_Request msg_;
};

class Init_AddObstacle_Request_y
{
public:
  explicit Init_AddObstacle_Request_y(::map_manager::srv::AddObstacle_Request & msg)
  : msg_(msg)
  {}
  Init_AddObstacle_Request_time y(::map_manager::srv::AddObstacle_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_AddObstacle_Request_time(msg_);
  }

private:
  ::map_manager::srv::AddObstacle_Request msg_;
};

class Init_AddObstacle_Request_x
{
public:
  Init_AddObstacle_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddObstacle_Request_y x(::map_manager::srv::AddObstacle_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_AddObstacle_Request_y(msg_);
  }

private:
  ::map_manager::srv::AddObstacle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::map_manager::srv::AddObstacle_Request>()
{
  return map_manager::srv::builder::Init_AddObstacle_Request_x();
}

}  // namespace map_manager


namespace map_manager
{

namespace srv
{

namespace builder
{

class Init_AddObstacle_Response_message
{
public:
  explicit Init_AddObstacle_Response_message(::map_manager::srv::AddObstacle_Response & msg)
  : msg_(msg)
  {}
  ::map_manager::srv::AddObstacle_Response message(::map_manager::srv::AddObstacle_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::map_manager::srv::AddObstacle_Response msg_;
};

class Init_AddObstacle_Response_success
{
public:
  Init_AddObstacle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddObstacle_Response_message success(::map_manager::srv::AddObstacle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AddObstacle_Response_message(msg_);
  }

private:
  ::map_manager::srv::AddObstacle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::map_manager::srv::AddObstacle_Response>()
{
  return map_manager::srv::builder::Init_AddObstacle_Response_success();
}

}  // namespace map_manager

#endif  // MAP_MANAGER__SRV__DETAIL__ADD_OBSTACLE__BUILDER_HPP_
