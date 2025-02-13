// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_manager:srv/AddVictim.idl
// generated code does not contain a copyright notice

#ifndef MAP_MANAGER__SRV__DETAIL__ADD_VICTIM__TRAITS_HPP_
#define MAP_MANAGER__SRV__DETAIL__ADD_VICTIM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "map_manager/srv/detail/add_victim__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace map_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddVictim_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddVictim_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddVictim_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace map_manager

namespace rosidl_generator_traits
{

[[deprecated("use map_manager::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const map_manager::srv::AddVictim_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  map_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use map_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const map_manager::srv::AddVictim_Request & msg)
{
  return map_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<map_manager::srv::AddVictim_Request>()
{
  return "map_manager::srv::AddVictim_Request";
}

template<>
inline const char * name<map_manager::srv::AddVictim_Request>()
{
  return "map_manager/srv/AddVictim_Request";
}

template<>
struct has_fixed_size<map_manager::srv::AddVictim_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<map_manager::srv::AddVictim_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<map_manager::srv::AddVictim_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace map_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddVictim_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddVictim_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddVictim_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace map_manager

namespace rosidl_generator_traits
{

[[deprecated("use map_manager::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const map_manager::srv::AddVictim_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  map_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use map_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const map_manager::srv::AddVictim_Response & msg)
{
  return map_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<map_manager::srv::AddVictim_Response>()
{
  return "map_manager::srv::AddVictim_Response";
}

template<>
inline const char * name<map_manager::srv::AddVictim_Response>()
{
  return "map_manager/srv/AddVictim_Response";
}

template<>
struct has_fixed_size<map_manager::srv::AddVictim_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<map_manager::srv::AddVictim_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<map_manager::srv::AddVictim_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<map_manager::srv::AddVictim>()
{
  return "map_manager::srv::AddVictim";
}

template<>
inline const char * name<map_manager::srv::AddVictim>()
{
  return "map_manager/srv/AddVictim";
}

template<>
struct has_fixed_size<map_manager::srv::AddVictim>
  : std::integral_constant<
    bool,
    has_fixed_size<map_manager::srv::AddVictim_Request>::value &&
    has_fixed_size<map_manager::srv::AddVictim_Response>::value
  >
{
};

template<>
struct has_bounded_size<map_manager::srv::AddVictim>
  : std::integral_constant<
    bool,
    has_bounded_size<map_manager::srv::AddVictim_Request>::value &&
    has_bounded_size<map_manager::srv::AddVictim_Response>::value
  >
{
};

template<>
struct is_service<map_manager::srv::AddVictim>
  : std::true_type
{
};

template<>
struct is_service_request<map_manager::srv::AddVictim_Request>
  : std::true_type
{
};

template<>
struct is_service_response<map_manager::srv::AddVictim_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAP_MANAGER__SRV__DETAIL__ADD_VICTIM__TRAITS_HPP_
