// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from map_manager:msg/MapState.idl
// generated code does not contain a copyright notice

#ifndef MAP_MANAGER__MSG__DETAIL__MAP_STATE__FUNCTIONS_H_
#define MAP_MANAGER__MSG__DETAIL__MAP_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "map_manager/msg/rosidl_generator_c__visibility_control.h"

#include "map_manager/msg/detail/map_state__struct.h"

/// Initialize msg/MapState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * map_manager__msg__MapState
 * )) before or use
 * map_manager__msg__MapState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
bool
map_manager__msg__MapState__init(map_manager__msg__MapState * msg);

/// Finalize msg/MapState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
void
map_manager__msg__MapState__fini(map_manager__msg__MapState * msg);

/// Create msg/MapState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * map_manager__msg__MapState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
map_manager__msg__MapState *
map_manager__msg__MapState__create();

/// Destroy msg/MapState message.
/**
 * It calls
 * map_manager__msg__MapState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
void
map_manager__msg__MapState__destroy(map_manager__msg__MapState * msg);

/// Check for msg/MapState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
bool
map_manager__msg__MapState__are_equal(const map_manager__msg__MapState * lhs, const map_manager__msg__MapState * rhs);

/// Copy a msg/MapState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
bool
map_manager__msg__MapState__copy(
  const map_manager__msg__MapState * input,
  map_manager__msg__MapState * output);

/// Initialize array of msg/MapState messages.
/**
 * It allocates the memory for the number of elements and calls
 * map_manager__msg__MapState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
bool
map_manager__msg__MapState__Sequence__init(map_manager__msg__MapState__Sequence * array, size_t size);

/// Finalize array of msg/MapState messages.
/**
 * It calls
 * map_manager__msg__MapState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
void
map_manager__msg__MapState__Sequence__fini(map_manager__msg__MapState__Sequence * array);

/// Create array of msg/MapState messages.
/**
 * It allocates the memory for the array and calls
 * map_manager__msg__MapState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
map_manager__msg__MapState__Sequence *
map_manager__msg__MapState__Sequence__create(size_t size);

/// Destroy array of msg/MapState messages.
/**
 * It calls
 * map_manager__msg__MapState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
void
map_manager__msg__MapState__Sequence__destroy(map_manager__msg__MapState__Sequence * array);

/// Check for msg/MapState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
bool
map_manager__msg__MapState__Sequence__are_equal(const map_manager__msg__MapState__Sequence * lhs, const map_manager__msg__MapState__Sequence * rhs);

/// Copy an array of msg/MapState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_manager
bool
map_manager__msg__MapState__Sequence__copy(
  const map_manager__msg__MapState__Sequence * input,
  map_manager__msg__MapState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MAP_MANAGER__MSG__DETAIL__MAP_STATE__FUNCTIONS_H_
