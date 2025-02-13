// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from map_manager:msg/MapState.idl
// generated code does not contain a copyright notice

#ifndef MAP_MANAGER__MSG__DETAIL__MAP_STATE__TRAITS_HPP_
#define MAP_MANAGER__MSG__DETAIL__MAP_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "map_manager/msg/detail/map_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace map_manager
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapState & msg,
  std::ostream & out)
{
  out << "{";
  // member: grid_data
  {
    if (msg.grid_data.size() == 0) {
      out << "grid_data: []";
    } else {
      out << "grid_data: [";
      size_t pending_items = msg.grid_data.size();
      for (auto item : msg.grid_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_numbers
  {
    if (msg.path_numbers.size() == 0) {
      out << "path_numbers: []";
    } else {
      out << "path_numbers: [";
      size_t pending_items = msg.path_numbers.size();
      for (auto item : msg.path_numbers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: grid_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.grid_data.size() == 0) {
      out << "grid_data: []\n";
    } else {
      out << "grid_data:\n";
      for (auto item : msg.grid_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: path_numbers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_numbers.size() == 0) {
      out << "path_numbers: []\n";
    } else {
      out << "path_numbers:\n";
      for (auto item : msg.path_numbers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace map_manager

namespace rosidl_generator_traits
{

[[deprecated("use map_manager::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const map_manager::msg::MapState & msg,
  std::ostream & out, size_t indentation = 0)
{
  map_manager::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use map_manager::msg::to_yaml() instead")]]
inline std::string to_yaml(const map_manager::msg::MapState & msg)
{
  return map_manager::msg::to_yaml(msg);
}

template<>
inline const char * data_type<map_manager::msg::MapState>()
{
  return "map_manager::msg::MapState";
}

template<>
inline const char * name<map_manager::msg::MapState>()
{
  return "map_manager/msg/MapState";
}

template<>
struct has_fixed_size<map_manager::msg::MapState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<map_manager::msg::MapState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<map_manager::msg::MapState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAP_MANAGER__MSG__DETAIL__MAP_STATE__TRAITS_HPP_
