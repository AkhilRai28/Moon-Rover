// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from micro_ros_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_
#define MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "micro_ros_msgs/msg/detail/graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace micro_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_Graph_nodes
{
public:
  Init_Graph_nodes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::micro_ros_msgs::msg::Graph nodes(::micro_ros_msgs::msg::Graph::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::micro_ros_msgs::msg::Graph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::micro_ros_msgs::msg::Graph>()
{
  return micro_ros_msgs::msg::builder::Init_Graph_nodes();
}

}  // namespace micro_ros_msgs

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_
