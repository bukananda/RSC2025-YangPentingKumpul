// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from map_manager:msg/MapState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "map_manager/msg/detail/map_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace map_manager
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MapState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) map_manager::msg::MapState(_init);
}

void MapState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<map_manager::msg::MapState *>(message_memory);
  typed_message->~MapState();
}

size_t size_function__MapState__grid_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MapState__grid_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MapState__grid_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MapState__grid_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__MapState__grid_data(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__MapState__grid_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__MapState__grid_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__MapState__grid_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MapState__path_numbers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MapState__path_numbers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MapState__path_numbers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MapState__path_numbers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__MapState__path_numbers(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__MapState__path_numbers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__MapState__path_numbers(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__MapState__path_numbers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MapState_message_member_array[4] = {
  {
    "grid_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager::msg::MapState, grid_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MapState__grid_data,  // size() function pointer
    get_const_function__MapState__grid_data,  // get_const(index) function pointer
    get_function__MapState__grid_data,  // get(index) function pointer
    fetch_function__MapState__grid_data,  // fetch(index, &value) function pointer
    assign_function__MapState__grid_data,  // assign(index, value) function pointer
    resize_function__MapState__grid_data  // resize(index) function pointer
  },
  {
    "path_numbers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager::msg::MapState, path_numbers),  // bytes offset in struct
    nullptr,  // default value
    size_function__MapState__path_numbers,  // size() function pointer
    get_const_function__MapState__path_numbers,  // get_const(index) function pointer
    get_function__MapState__path_numbers,  // get(index) function pointer
    fetch_function__MapState__path_numbers,  // fetch(index, &value) function pointer
    assign_function__MapState__path_numbers,  // assign(index, value) function pointer
    resize_function__MapState__path_numbers  // resize(index) function pointer
  },
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager::msg::MapState, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager::msg::MapState, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MapState_message_members = {
  "map_manager::msg",  // message namespace
  "MapState",  // message name
  4,  // number of fields
  sizeof(map_manager::msg::MapState),
  MapState_message_member_array,  // message members
  MapState_init_function,  // function to initialize message memory (memory has to be allocated)
  MapState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MapState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MapState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace map_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<map_manager::msg::MapState>()
{
  return &::map_manager::msg::rosidl_typesupport_introspection_cpp::MapState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, map_manager, msg, MapState)() {
  return &::map_manager::msg::rosidl_typesupport_introspection_cpp::MapState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
