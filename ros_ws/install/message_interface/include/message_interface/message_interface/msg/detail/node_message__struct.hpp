// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_interface:msg/NodeMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "message_interface/msg/node_message.hpp"


#ifndef MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__STRUCT_HPP_
#define MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__message_interface__msg__NodeMessage __attribute__((deprecated))
#else
# define DEPRECATED__message_interface__msg__NodeMessage __declspec(deprecated)
#endif

namespace message_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeMessage_
{
  using Type = NodeMessage_<ContainerAllocator>;

  explicit NodeMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  explicit NodeMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_interface::msg::NodeMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_interface::msg::NodeMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_interface::msg::NodeMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_interface::msg::NodeMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_interface::msg::NodeMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_interface::msg::NodeMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_interface::msg::NodeMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_interface::msg::NodeMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_interface::msg::NodeMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_interface::msg::NodeMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_interface__msg__NodeMessage
    std::shared_ptr<message_interface::msg::NodeMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_interface__msg__NodeMessage
    std::shared_ptr<message_interface::msg::NodeMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeMessage_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeMessage_

// alias to use template instance with default allocator
using NodeMessage =
  message_interface::msg::NodeMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_interface

#endif  // MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__STRUCT_HPP_
