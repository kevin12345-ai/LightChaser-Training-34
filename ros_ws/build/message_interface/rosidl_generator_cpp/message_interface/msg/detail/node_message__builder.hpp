// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_interface:msg/NodeMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "message_interface/msg/node_message.hpp"


#ifndef MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__BUILDER_HPP_
#define MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "message_interface/msg/detail/node_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace message_interface
{

namespace msg
{

namespace builder
{

class Init_NodeMessage_data
{
public:
  Init_NodeMessage_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::message_interface::msg::NodeMessage data(::message_interface::msg::NodeMessage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_interface::msg::NodeMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_interface::msg::NodeMessage>()
{
  return message_interface::msg::builder::Init_NodeMessage_data();
}

}  // namespace message_interface

#endif  // MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__BUILDER_HPP_
