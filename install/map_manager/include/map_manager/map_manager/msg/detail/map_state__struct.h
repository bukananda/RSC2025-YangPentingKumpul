// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from map_manager:msg/MapState.idl
// generated code does not contain a copyright notice

#ifndef MAP_MANAGER__MSG__DETAIL__MAP_STATE__STRUCT_H_
#define MAP_MANAGER__MSG__DETAIL__MAP_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'grid_data'
// Member 'path_numbers'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MapState in the package map_manager.
typedef struct map_manager__msg__MapState
{
  rosidl_runtime_c__int32__Sequence grid_data;
  rosidl_runtime_c__int32__Sequence path_numbers;
  int32_t width;
  int32_t height;
} map_manager__msg__MapState;

// Struct for a sequence of map_manager__msg__MapState.
typedef struct map_manager__msg__MapState__Sequence
{
  map_manager__msg__MapState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_manager__msg__MapState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MANAGER__MSG__DETAIL__MAP_STATE__STRUCT_H_
