// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from map_manager:srv/AddObstacle.idl
// generated code does not contain a copyright notice

#ifndef MAP_MANAGER__SRV__DETAIL__ADD_OBSTACLE__STRUCT_HPP_
#define MAP_MANAGER__SRV__DETAIL__ADD_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__map_manager__srv__AddObstacle_Request __attribute__((deprecated))
#else
# define DEPRECATED__map_manager__srv__AddObstacle_Request __declspec(deprecated)
#endif

namespace map_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddObstacle_Request_
{
  using Type = AddObstacle_Request_<ContainerAllocator>;

  explicit AddObstacle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->time = 0.0f;
    }
  }

  explicit AddObstacle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->time = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _time_type =
    float;
  _time_type time;

  // setters for named parameter idiom
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__time(
    const float & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    map_manager::srv::AddObstacle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const map_manager::srv::AddObstacle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<map_manager::srv::AddObstacle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<map_manager::srv::AddObstacle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      map_manager::srv::AddObstacle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<map_manager::srv::AddObstacle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      map_manager::srv::AddObstacle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<map_manager::srv::AddObstacle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<map_manager::srv::AddObstacle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<map_manager::srv::AddObstacle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__map_manager__srv__AddObstacle_Request
    std::shared_ptr<map_manager::srv::AddObstacle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__map_manager__srv__AddObstacle_Request
    std::shared_ptr<map_manager::srv::AddObstacle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddObstacle_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddObstacle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddObstacle_Request_

// alias to use template instance with default allocator
using AddObstacle_Request =
  map_manager::srv::AddObstacle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace map_manager


#ifndef _WIN32
# define DEPRECATED__map_manager__srv__AddObstacle_Response __attribute__((deprecated))
#else
# define DEPRECATED__map_manager__srv__AddObstacle_Response __declspec(deprecated)
#endif

namespace map_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddObstacle_Response_
{
  using Type = AddObstacle_Response_<ContainerAllocator>;

  explicit AddObstacle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit AddObstacle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    map_manager::srv::AddObstacle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const map_manager::srv::AddObstacle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<map_manager::srv::AddObstacle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<map_manager::srv::AddObstacle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      map_manager::srv::AddObstacle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<map_manager::srv::AddObstacle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      map_manager::srv::AddObstacle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<map_manager::srv::AddObstacle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<map_manager::srv::AddObstacle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<map_manager::srv::AddObstacle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__map_manager__srv__AddObstacle_Response
    std::shared_ptr<map_manager::srv::AddObstacle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__map_manager__srv__AddObstacle_Response
    std::shared_ptr<map_manager::srv::AddObstacle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddObstacle_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddObstacle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddObstacle_Response_

// alias to use template instance with default allocator
using AddObstacle_Response =
  map_manager::srv::AddObstacle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace map_manager

namespace map_manager
{

namespace srv
{

struct AddObstacle
{
  using Request = map_manager::srv::AddObstacle_Request;
  using Response = map_manager::srv::AddObstacle_Response;
};

}  // namespace srv

}  // namespace map_manager

#endif  // MAP_MANAGER__SRV__DETAIL__ADD_OBSTACLE__STRUCT_HPP_
