// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from map_manager:msg/MapState.idl
// generated code does not contain a copyright notice

#ifndef MAP_MANAGER__MSG__DETAIL__MAP_STATE__STRUCT_HPP_
#define MAP_MANAGER__MSG__DETAIL__MAP_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__map_manager__msg__MapState __attribute__((deprecated))
#else
# define DEPRECATED__map_manager__msg__MapState __declspec(deprecated)
#endif

namespace map_manager
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapState_
{
  using Type = MapState_<ContainerAllocator>;

  explicit MapState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
    }
  }

  explicit MapState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
    }
  }

  // field types and members
  using _grid_data_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _grid_data_type grid_data;
  using _path_numbers_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _path_numbers_type path_numbers;
  using _width_type =
    int32_t;
  _width_type width;
  using _height_type =
    int32_t;
  _height_type height;

  // setters for named parameter idiom
  Type & set__grid_data(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->grid_data = _arg;
    return *this;
  }
  Type & set__path_numbers(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->path_numbers = _arg;
    return *this;
  }
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    map_manager::msg::MapState_<ContainerAllocator> *;
  using ConstRawPtr =
    const map_manager::msg::MapState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<map_manager::msg::MapState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<map_manager::msg::MapState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      map_manager::msg::MapState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<map_manager::msg::MapState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      map_manager::msg::MapState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<map_manager::msg::MapState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<map_manager::msg::MapState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<map_manager::msg::MapState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__map_manager__msg__MapState
    std::shared_ptr<map_manager::msg::MapState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__map_manager__msg__MapState
    std::shared_ptr<map_manager::msg::MapState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapState_ & other) const
  {
    if (this->grid_data != other.grid_data) {
      return false;
    }
    if (this->path_numbers != other.path_numbers) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapState_

// alias to use template instance with default allocator
using MapState =
  map_manager::msg::MapState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace map_manager

#endif  // MAP_MANAGER__MSG__DETAIL__MAP_STATE__STRUCT_HPP_
