// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from micro_ros_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__STRUCT_HPP_
#define MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'nodes'
#include "micro_ros_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__micro_ros_msgs__msg__Graph __attribute__((deprecated))
#else
# define DEPRECATED__micro_ros_msgs__msg__Graph __declspec(deprecated)
#endif

namespace micro_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Graph_
{
  using Type = Graph_<ContainerAllocator>;

  explicit Graph_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Graph_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _nodes_type =
    std::vector<micro_ros_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<micro_ros_msgs::msg::Node_<ContainerAllocator>>>;
  _nodes_type nodes;

  // setters for named parameter idiom
  Type & set__nodes(
    const std::vector<micro_ros_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<micro_ros_msgs::msg::Node_<ContainerAllocator>>> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    micro_ros_msgs::msg::Graph_<ContainerAllocator> *;
  using ConstRawPtr =
    const micro_ros_msgs::msg::Graph_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<micro_ros_msgs::msg::Graph_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<micro_ros_msgs::msg::Graph_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      micro_ros_msgs::msg::Graph_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<micro_ros_msgs::msg::Graph_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      micro_ros_msgs::msg::Graph_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<micro_ros_msgs::msg::Graph_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<micro_ros_msgs::msg::Graph_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<micro_ros_msgs::msg::Graph_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__micro_ros_msgs__msg__Graph
    std::shared_ptr<micro_ros_msgs::msg::Graph_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__micro_ros_msgs__msg__Graph
    std::shared_ptr<micro_ros_msgs::msg::Graph_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Graph_ & other) const
  {
    if (this->nodes != other.nodes) {
      return false;
    }
    return true;
  }
  bool operator!=(const Graph_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Graph_

// alias to use template instance with default allocator
using Graph =
  micro_ros_msgs::msg::Graph_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace micro_ros_msgs

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__GRAPH__STRUCT_HPP_
