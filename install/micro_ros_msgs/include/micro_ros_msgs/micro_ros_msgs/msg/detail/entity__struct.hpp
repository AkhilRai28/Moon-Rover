// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from micro_ros_msgs:msg/Entity.idl
// generated code does not contain a copyright notice

#ifndef MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__STRUCT_HPP_
#define MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__micro_ros_msgs__msg__Entity __attribute__((deprecated))
#else
# define DEPRECATED__micro_ros_msgs__msg__Entity __declspec(deprecated)
#endif

namespace micro_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Entity_
{
  using Type = Entity_<ContainerAllocator>;

  explicit Entity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity_type = 0;
      this->name = "";
    }
  }

  explicit Entity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity_type = 0;
      this->name = "";
    }
  }

  // field types and members
  using _entity_type_type =
    unsigned char;
  _entity_type_type entity_type;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _types_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _types_type types;

  // setters for named parameter idiom
  Type & set__entity_type(
    const unsigned char & _arg)
  {
    this->entity_type = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__types(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->types = _arg;
    return *this;
  }

  // constant declarations
  static constexpr unsigned char PUBLISHER =
    0;
  static constexpr unsigned char SUBSCRIBER =
    1;
  static constexpr unsigned char SERVICE_SERVER =
    2;
  static constexpr unsigned char SERVICE_CLIENT =
    3;

  // pointer types
  using RawPtr =
    micro_ros_msgs::msg::Entity_<ContainerAllocator> *;
  using ConstRawPtr =
    const micro_ros_msgs::msg::Entity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<micro_ros_msgs::msg::Entity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<micro_ros_msgs::msg::Entity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      micro_ros_msgs::msg::Entity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<micro_ros_msgs::msg::Entity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      micro_ros_msgs::msg::Entity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<micro_ros_msgs::msg::Entity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<micro_ros_msgs::msg::Entity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<micro_ros_msgs::msg::Entity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__micro_ros_msgs__msg__Entity
    std::shared_ptr<micro_ros_msgs::msg::Entity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__micro_ros_msgs__msg__Entity
    std::shared_ptr<micro_ros_msgs::msg::Entity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Entity_ & other) const
  {
    if (this->entity_type != other.entity_type) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->types != other.types) {
      return false;
    }
    return true;
  }
  bool operator!=(const Entity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Entity_

// alias to use template instance with default allocator
using Entity =
  micro_ros_msgs::msg::Entity_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char Entity_<ContainerAllocator>::PUBLISHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char Entity_<ContainerAllocator>::SUBSCRIBER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char Entity_<ContainerAllocator>::SERVICE_SERVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char Entity_<ContainerAllocator>::SERVICE_CLIENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace micro_ros_msgs

#endif  // MICRO_ROS_MSGS__MSG__DETAIL__ENTITY__STRUCT_HPP_
