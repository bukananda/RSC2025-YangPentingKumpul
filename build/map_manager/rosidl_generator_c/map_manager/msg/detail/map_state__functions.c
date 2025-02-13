// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from map_manager:msg/MapState.idl
// generated code does not contain a copyright notice
#include "map_manager/msg/detail/map_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `grid_data`
// Member `path_numbers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
map_manager__msg__MapState__init(map_manager__msg__MapState * msg)
{
  if (!msg) {
    return false;
  }
  // grid_data
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->grid_data, 0)) {
    map_manager__msg__MapState__fini(msg);
    return false;
  }
  // path_numbers
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->path_numbers, 0)) {
    map_manager__msg__MapState__fini(msg);
    return false;
  }
  // width
  // height
  return true;
}

void
map_manager__msg__MapState__fini(map_manager__msg__MapState * msg)
{
  if (!msg) {
    return;
  }
  // grid_data
  rosidl_runtime_c__int32__Sequence__fini(&msg->grid_data);
  // path_numbers
  rosidl_runtime_c__int32__Sequence__fini(&msg->path_numbers);
  // width
  // height
}

bool
map_manager__msg__MapState__are_equal(const map_manager__msg__MapState * lhs, const map_manager__msg__MapState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // grid_data
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->grid_data), &(rhs->grid_data)))
  {
    return false;
  }
  // path_numbers
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->path_numbers), &(rhs->path_numbers)))
  {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  return true;
}

bool
map_manager__msg__MapState__copy(
  const map_manager__msg__MapState * input,
  map_manager__msg__MapState * output)
{
  if (!input || !output) {
    return false;
  }
  // grid_data
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->grid_data), &(output->grid_data)))
  {
    return false;
  }
  // path_numbers
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->path_numbers), &(output->path_numbers)))
  {
    return false;
  }
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  return true;
}

map_manager__msg__MapState *
map_manager__msg__MapState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  map_manager__msg__MapState * msg = (map_manager__msg__MapState *)allocator.allocate(sizeof(map_manager__msg__MapState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(map_manager__msg__MapState));
  bool success = map_manager__msg__MapState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
map_manager__msg__MapState__destroy(map_manager__msg__MapState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    map_manager__msg__MapState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
map_manager__msg__MapState__Sequence__init(map_manager__msg__MapState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  map_manager__msg__MapState * data = NULL;

  if (size) {
    data = (map_manager__msg__MapState *)allocator.zero_allocate(size, sizeof(map_manager__msg__MapState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = map_manager__msg__MapState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        map_manager__msg__MapState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
map_manager__msg__MapState__Sequence__fini(map_manager__msg__MapState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      map_manager__msg__MapState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

map_manager__msg__MapState__Sequence *
map_manager__msg__MapState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  map_manager__msg__MapState__Sequence * array = (map_manager__msg__MapState__Sequence *)allocator.allocate(sizeof(map_manager__msg__MapState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = map_manager__msg__MapState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
map_manager__msg__MapState__Sequence__destroy(map_manager__msg__MapState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    map_manager__msg__MapState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
map_manager__msg__MapState__Sequence__are_equal(const map_manager__msg__MapState__Sequence * lhs, const map_manager__msg__MapState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!map_manager__msg__MapState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
map_manager__msg__MapState__Sequence__copy(
  const map_manager__msg__MapState__Sequence * input,
  map_manager__msg__MapState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(map_manager__msg__MapState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    map_manager__msg__MapState * data =
      (map_manager__msg__MapState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!map_manager__msg__MapState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          map_manager__msg__MapState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!map_manager__msg__MapState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
