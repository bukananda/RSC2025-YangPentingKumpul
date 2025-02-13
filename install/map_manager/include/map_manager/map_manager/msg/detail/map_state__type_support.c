// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from map_manager:msg/MapState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "map_manager/msg/detail/map_state__rosidl_typesupport_introspection_c.h"
#include "map_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "map_manager/msg/detail/map_state__functions.h"
#include "map_manager/msg/detail/map_state__struct.h"


// Include directives for member types
// Member `grid_data`
// Member `path_numbers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_manager__msg__MapState__init(message_memory);
}

void map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_fini_function(void * message_memory)
{
  map_manager__msg__MapState__fini(message_memory);
}

size_t map_manager__msg__MapState__rosidl_typesupport_introspection_c__size_function__MapState__grid_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_const_function__MapState__grid_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_function__MapState__grid_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void map_manager__msg__MapState__rosidl_typesupport_introspection_c__fetch_function__MapState__grid_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_const_function__MapState__grid_data(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void map_manager__msg__MapState__rosidl_typesupport_introspection_c__assign_function__MapState__grid_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_function__MapState__grid_data(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool map_manager__msg__MapState__rosidl_typesupport_introspection_c__resize_function__MapState__grid_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t map_manager__msg__MapState__rosidl_typesupport_introspection_c__size_function__MapState__path_numbers(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_const_function__MapState__path_numbers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_function__MapState__path_numbers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void map_manager__msg__MapState__rosidl_typesupport_introspection_c__fetch_function__MapState__path_numbers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_const_function__MapState__path_numbers(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void map_manager__msg__MapState__rosidl_typesupport_introspection_c__assign_function__MapState__path_numbers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_function__MapState__path_numbers(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool map_manager__msg__MapState__rosidl_typesupport_introspection_c__resize_function__MapState__path_numbers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_message_member_array[4] = {
  {
    "grid_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager__msg__MapState, grid_data),  // bytes offset in struct
    NULL,  // default value
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__size_function__MapState__grid_data,  // size() function pointer
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_const_function__MapState__grid_data,  // get_const(index) function pointer
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_function__MapState__grid_data,  // get(index) function pointer
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__fetch_function__MapState__grid_data,  // fetch(index, &value) function pointer
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__assign_function__MapState__grid_data,  // assign(index, value) function pointer
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__resize_function__MapState__grid_data  // resize(index) function pointer
  },
  {
    "path_numbers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager__msg__MapState, path_numbers),  // bytes offset in struct
    NULL,  // default value
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__size_function__MapState__path_numbers,  // size() function pointer
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_const_function__MapState__path_numbers,  // get_const(index) function pointer
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__get_function__MapState__path_numbers,  // get(index) function pointer
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__fetch_function__MapState__path_numbers,  // fetch(index, &value) function pointer
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__assign_function__MapState__path_numbers,  // assign(index, value) function pointer
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__resize_function__MapState__path_numbers  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager__msg__MapState, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager__msg__MapState, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_message_members = {
  "map_manager__msg",  // message namespace
  "MapState",  // message name
  4,  // number of fields
  sizeof(map_manager__msg__MapState),
  map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_message_member_array,  // message members
  map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_init_function,  // function to initialize message memory (memory has to be allocated)
  map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_message_type_support_handle = {
  0,
  &map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_manager, msg, MapState)() {
  if (!map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_message_type_support_handle.typesupport_identifier) {
    map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &map_manager__msg__MapState__rosidl_typesupport_introspection_c__MapState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
