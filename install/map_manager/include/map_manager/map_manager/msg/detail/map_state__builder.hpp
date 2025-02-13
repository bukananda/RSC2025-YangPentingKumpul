// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from map_manager:msg/MapState.idl
// generated code does not contain a copyright notice

#ifndef MAP_MANAGER__MSG__DETAIL__MAP_STATE__BUILDER_HPP_
#define MAP_MANAGER__MSG__DETAIL__MAP_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "map_manager/msg/detail/map_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace map_manager
{

namespace msg
{

namespace builder
{

class Init_MapState_height
{
public:
  explicit Init_MapState_height(::map_manager::msg::MapState & msg)
  : msg_(msg)
  {}
  ::map_manager::msg::MapState height(::map_manager::msg::MapState::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::map_manager::msg::MapState msg_;
};

class Init_MapState_width
{
public:
  explicit Init_MapState_width(::map_manager::msg::MapState & msg)
  : msg_(msg)
  {}
  Init_MapState_height width(::map_manager::msg::MapState::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_MapState_height(msg_);
  }

private:
  ::map_manager::msg::MapState msg_;
};

class Init_MapState_path_numbers
{
public:
  explicit Init_MapState_path_numbers(::map_manager::msg::MapState & msg)
  : msg_(msg)
  {}
  Init_MapState_width path_numbers(::map_manager::msg::MapState::_path_numbers_type arg)
  {
    msg_.path_numbers = std::move(arg);
    return Init_MapState_width(msg_);
  }

private:
  ::map_manager::msg::MapState msg_;
};

class Init_MapState_grid_data
{
public:
  Init_MapState_grid_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapState_path_numbers grid_data(::map_manager::msg::MapState::_grid_data_type arg)
  {
    msg_.grid_data = std::move(arg);
    return Init_MapState_path_numbers(msg_);
  }

private:
  ::map_manager::msg::MapState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::map_manager::msg::MapState>()
{
  return map_manager::msg::builder::Init_MapState_grid_data();
}

}  // namespace map_manager

#endif  // MAP_MANAGER__MSG__DETAIL__MAP_STATE__BUILDER_HPP_
