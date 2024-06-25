// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from micro_ros_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
#define MICRO_ROS_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "micro_ros_msgs/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace micro_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_Node_entities
{
public:
  explicit Init_Node_entities(::micro_ros_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  ::micro_ros_msgs::msg::Node entities(::micro_ros_msgs::msg::Node::_entities_type arg)
  {
    msg_.entities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::micro_ros_msgs::msg::Node msg_;
};

class Init_Node_node_name
{
public:
  explicit Init_Node_node_name(::micro_ros_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_entities node_name(::micro_ros_msgs::msg::Node::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_Node_entities(msg_);
  }

private:
  ::micro_ros_msgs::msg::Node msg_;
};

class Init_Node_node_namespace
{
public:
  Init_Node_node_namespace()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Node_node_name node_namespace(::micro_ros_msgs::msg::Node::_node_namespace_type arg)
  {
    msg_.node_namespace = std::move(arg);
    return Init_Node_node_name(msg_);
  }

private:
  ::micro_ros_msgs::msg::Node msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::micro_ros_msgs::msg::Node>()
{
  return micro_ros_msgs::msg::builder::Init_Node_node_namespace();
}

}  // namespace micro_ros_msgs

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
