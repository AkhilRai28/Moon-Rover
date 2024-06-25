// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from micro_ros_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "micro_ros_msgs/msg/detail/graph__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace micro_ros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Graph_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) micro_ros_msgs::msg::Graph(_init);
}

void Graph_fini_function(void * message_memory)
{
  auto typed_message = static_cast<micro_ros_msgs::msg::Graph *>(message_memory);
  typed_message->~Graph();
}

size_t size_function__Graph__nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<micro_ros_msgs::msg::Node> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Graph__nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<micro_ros_msgs::msg::Node> *>(untyped_member);
  return &member[index];
}

void * get_function__Graph__nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<micro_ros_msgs::msg::Node> *>(untyped_member);
  return &member[index];
}

void fetch_function__Graph__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const micro_ros_msgs::msg::Node *>(
    get_const_function__Graph__nodes(untyped_member, index));
  auto & value = *reinterpret_cast<micro_ros_msgs::msg::Node *>(untyped_value);
  value = item;
}

void assign_function__Graph__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<micro_ros_msgs::msg::Node *>(
    get_function__Graph__nodes(untyped_member, index));
  const auto & value = *reinterpret_cast<const micro_ros_msgs::msg::Node *>(untyped_value);
  item = value;
}

void resize_function__Graph__nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<micro_ros_msgs::msg::Node> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Graph_message_member_array[1] = {
  {
    "nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<micro_ros_msgs::msg::Node>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(micro_ros_msgs::msg::Graph, nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__Graph__nodes,  // size() function pointer
    get_const_function__Graph__nodes,  // get_const(index) function pointer
    get_function__Graph__nodes,  // get(index) function pointer
    fetch_function__Graph__nodes,  // fetch(index, &value) function pointer
    assign_function__Graph__nodes,  // assign(index, value) function pointer
    resize_function__Graph__nodes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Graph_message_members = {
  "micro_ros_msgs::msg",  // message namespace
  "Graph",  // message name
  1,  // number of fields
  sizeof(micro_ros_msgs::msg::Graph),
  Graph_message_member_array,  // message members
  Graph_init_function,  // function to initialize message memory (memory has to be allocated)
  Graph_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Graph_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Graph_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace micro_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<micro_ros_msgs::msg::Graph>()
{
  return &::micro_ros_msgs::msg::rosidl_typesupport_introspection_cpp::Graph_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, micro_ros_msgs, msg, Graph)() {
  return &::micro_ros_msgs::msg::rosidl_typesupport_introspection_cpp::Graph_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
