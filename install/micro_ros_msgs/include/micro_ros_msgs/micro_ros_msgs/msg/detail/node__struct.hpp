// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from micro_ros_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
#define MICRO_ROS_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'entities'
#include "micro_ros_msgs/msg/detail/entity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__micro_ros_msgs__msg__Node __attribute__((deprecated))
#else
# define DEPRECATED__micro_ros_msgs__msg__Node __declspec(deprecated)
#endif

namespace micro_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Node_
{
  using Type = Node_<ContainerAllocator>;

  explicit Node_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_namespace = "";
      this->node_name = "";
    }
  }

  explicit Node_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_namespace(_alloc),
    node_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_namespace = "";
      this->node_name = "";
    }
  }

  // field types and members
  using _node_namespace_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_namespace_type node_namespace;
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_name_type node_name;
  using _entities_type =
    std::vector<micro_ros_msgs::msg::Entity_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<micro_ros_msgs::msg::Entity_<ContainerAllocator>>>;
  _entities_type entities;

  // setters for named parameter idiom
  Type & set__node_namespace(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_namespace = _arg;
    return *this;
  }
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__entities(
    const std::vector<micro_ros_msgs::msg::Entity_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<micro_ros_msgs::msg::Entity_<ContainerAllocator>>> & _arg)
  {
    this->entities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    micro_ros_msgs::msg::Node_<ContainerAllocator> *;
  using ConstRawPtr =
    const micro_ros_msgs::msg::Node_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<micro_ros_msgs::msg::Node_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<micro_ros_msgs::msg::Node_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      micro_ros_msgs::msg::Node_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<micro_ros_msgs::msg::Node_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      micro_ros_msgs::msg::Node_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<micro_ros_msgs::msg::Node_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<micro_ros_msgs::msg::Node_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<micro_ros_msgs::msg::Node_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__micro_ros_msgs__msg__Node
    std::shared_ptr<micro_ros_msgs::msg::Node_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__micro_ros_msgs__msg__Node
    std::shared_ptr<micro_ros_msgs::msg::Node_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Node_ & other) const
  {
    if (this->node_namespace != other.node_namespace) {
      return false;
    }
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->entities != other.entities) {
      return false;
    }
    return true;
  }
  bool operator!=(const Node_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Node_

// alias to use template instance with default allocator
using Node =
  micro_ros_msgs::msg::Node_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace micro_ros_msgs

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
