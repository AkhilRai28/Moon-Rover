// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from micro_ros_msgs:msg/Entity.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__TRAITS_HPP_
#define MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "micro_ros_msgs/msg/detail/entity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace micro_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Entity & msg,
  std::ostream & out)
{
  out << "{";
  // member: entity_type
  {
    out << "entity_type: ";
    rosidl_generator_traits::character_value_to_yaml(msg.entity_type, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: types
  {
    if (msg.types.size() == 0) {
      out << "types: []";
    } else {
      out << "types: [";
      size_t pending_items = msg.types.size();
      for (auto item : msg.types) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Entity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: entity_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "entity_type: ";
    rosidl_generator_traits::character_value_to_yaml(msg.entity_type, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.types.size() == 0) {
      out << "types: []\n";
    } else {
      out << "types:\n";
      for (auto item : msg.types) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Entity & msg, bool use_flow_style = false)
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

}  // namespace micro_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use micro_ros_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const micro_ros_msgs::msg::Entity & msg,
  std::ostream & out, size_t indentation = 0)
{
  micro_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use micro_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const micro_ros_msgs::msg::Entity & msg)
{
  return micro_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<micro_ros_msgs::msg::Entity>()
{
  return "micro_ros_msgs::msg::Entity";
}

template<>
inline const char * name<micro_ros_msgs::msg::Entity>()
{
  return "micro_ros_msgs/msg/Entity";
}

template<>
struct has_fixed_size<micro_ros_msgs::msg::Entity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<micro_ros_msgs::msg::Entity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<micro_ros_msgs::msg::Entity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__TRAITS_HPP_
