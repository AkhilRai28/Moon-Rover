// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from micro_ros_msgs:msg/Entity.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__BUILDER_HPP_
#define MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "micro_ros_msgs/msg/detail/entity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace micro_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_Entity_types
{
public:
  explicit Init_Entity_types(::micro_ros_msgs::msg::Entity & msg)
  : msg_(msg)
  {}
  ::micro_ros_msgs::msg::Entity types(::micro_ros_msgs::msg::Entity::_types_type arg)
  {
    msg_.types = std::move(arg);
    return std::move(msg_);
  }

private:
  ::micro_ros_msgs::msg::Entity msg_;
};

class Init_Entity_name
{
public:
  explicit Init_Entity_name(::micro_ros_msgs::msg::Entity & msg)
  : msg_(msg)
  {}
  Init_Entity_types name(::micro_ros_msgs::msg::Entity::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Entity_types(msg_);
  }

private:
  ::micro_ros_msgs::msg::Entity msg_;
};

class Init_Entity_entity_type
{
public:
  Init_Entity_entity_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Entity_name entity_type(::micro_ros_msgs::msg::Entity::_entity_type_type arg)
  {
    msg_.entity_type = std::move(arg);
    return Init_Entity_name(msg_);
  }

private:
  ::micro_ros_msgs::msg::Entity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::micro_ros_msgs::msg::Entity>()
{
  return micro_ros_msgs::msg::builder::Init_Entity_entity_type();
}

}  // namespace micro_ros_msgs

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__BUILDER_HPP_
