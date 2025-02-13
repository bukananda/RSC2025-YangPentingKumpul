// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from map_manager:msg/MapState.idl
// generated code does not contain a copyright notice

#ifndef MAP_MANAGER__MSG__DETAIL__MAP_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MAP_MANAGER__MSG__DETAIL__MAP_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "map_manager/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "map_manager/msg/detail/map_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace map_manager
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_manager
cdr_serialize(
  const map_manager::msg::MapState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_manager
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  map_manager::msg::MapState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_manager
get_serialized_size(
  const map_manager::msg::MapState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_manager
max_serialized_size_MapState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace map_manager

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_manager
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, map_manager, msg, MapState)();

#ifdef __cplusplus
}
#endif

#endif  // MAP_MANAGER__MSG__DETAIL__MAP_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
