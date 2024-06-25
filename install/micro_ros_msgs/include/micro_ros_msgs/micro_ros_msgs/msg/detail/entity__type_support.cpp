// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from micro_ros_msgs:msg/Entity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "micro_ros_msgs/msg/detail/entity__struct.hpp"
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

void Entity_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) micro_ros_msgs::msg::Entity(_init);
}

void Entity_fini_function(void * message_memory)
{
  auto typed_message = static_cast<micro_ros_msgs::msg::Entity *>(message_memory);
  typed_message->~Entity();
}

size_t size_function__Entity__types(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Entity__types(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Entity__types(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Entity__types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Entity__types(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Entity__types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Entity__types(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Entity__types(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Entity_message_member_array[3] = {
  {
    "entity_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(micro_ros_msgs::msg::Entity, entity_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(micro_ros_msgs::msg::Entity, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "types",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(micro_ros_msgs::msg::Entity, types),  // bytes offset in struct
    nullptr,  // default value
    size_function__Entity__types,  // size() function pointer
    get_const_function__Entity__types,  // get_const(index) function pointer
    get_function__Entity__types,  // get(index) function pointer
    fetch_function__Entity__types,  // fetch(index, &value) function pointer
    assign_function__Entity__types,  // assign(index, value) function pointer
    resize_function__Entity__types  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Entity_message_members = {
  "micro_ros_msgs::msg",  // message namespace
  "Entity",  // message name
  3,  // number of fields
  sizeof(micro_ros_msgs::msg::Entity),
  Entity_message_member_array,  // message members
  Entity_init_function,  // function to initialize message memory (memory has to be allocated)
  Entity_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Entity_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Entity_message_members,
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
get_message_type_support_handle<micro_ros_msgs::msg::Entity>()
{
  return &::micro_ros_msgs::msg::rosidl_typesupport_introspection_cpp::Entity_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, micro_ros_msgs, msg, Entity)() {
  return &::micro_ros_msgs::msg::rosidl_typesupport_introspection_cpp::Entity_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
