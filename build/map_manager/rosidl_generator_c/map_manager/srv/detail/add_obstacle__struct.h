// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from map_manager:srv/AddObstacle.idl
// generated code does not contain a copyright notice

#ifndef MAP_MANAGER__SRV__DETAIL__ADD_OBSTACLE__STRUCT_H_
#define MAP_MANAGER__SRV__DETAIL__ADD_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddObstacle in the package map_manager.
typedef struct map_manager__srv__AddObstacle_Request
{
  int32_t x;
  int32_t y;
  float time;
} map_manager__srv__AddObstacle_Request;

// Struct for a sequence of map_manager__srv__AddObstacle_Request.
typedef struct map_manager__srv__AddObstacle_Request__Sequence
{
  map_manager__srv__AddObstacle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_manager__srv__AddObstacle_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AddObstacle in the package map_manager.
typedef struct map_manager__srv__AddObstacle_Response
{
  bool success;
  rosidl_runtime_c__String message;
} map_manager__srv__AddObstacle_Response;

// Struct for a sequence of map_manager__srv__AddObstacle_Response.
typedef struct map_manager__srv__AddObstacle_Response__Sequence
{
  map_manager__srv__AddObstacle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_manager__srv__AddObstacle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MANAGER__SRV__DETAIL__ADD_OBSTACLE__STRUCT_H_
