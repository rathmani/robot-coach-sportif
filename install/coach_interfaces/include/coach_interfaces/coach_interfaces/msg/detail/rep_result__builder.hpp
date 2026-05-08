// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from coach_interfaces:msg/RepResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "coach_interfaces/msg/rep_result.hpp"


#ifndef COACH_INTERFACES__MSG__DETAIL__REP_RESULT__BUILDER_HPP_
#define COACH_INTERFACES__MSG__DETAIL__REP_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "coach_interfaces/msg/detail/rep_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace coach_interfaces
{

namespace msg
{

namespace builder
{

class Init_RepResult_rep_count
{
public:
  explicit Init_RepResult_rep_count(::coach_interfaces::msg::RepResult & msg)
  : msg_(msg)
  {}
  ::coach_interfaces::msg::RepResult rep_count(::coach_interfaces::msg::RepResult::_rep_count_type arg)
  {
    msg_.rep_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coach_interfaces::msg::RepResult msg_;
};

class Init_RepResult_feedback_message
{
public:
  explicit Init_RepResult_feedback_message(::coach_interfaces::msg::RepResult & msg)
  : msg_(msg)
  {}
  Init_RepResult_rep_count feedback_message(::coach_interfaces::msg::RepResult::_feedback_message_type arg)
  {
    msg_.feedback_message = std::move(arg);
    return Init_RepResult_rep_count(msg_);
  }

private:
  ::coach_interfaces::msg::RepResult msg_;
};

class Init_RepResult_error_type
{
public:
  explicit Init_RepResult_error_type(::coach_interfaces::msg::RepResult & msg)
  : msg_(msg)
  {}
  Init_RepResult_feedback_message error_type(::coach_interfaces::msg::RepResult::_error_type_type arg)
  {
    msg_.error_type = std::move(arg);
    return Init_RepResult_feedback_message(msg_);
  }

private:
  ::coach_interfaces::msg::RepResult msg_;
};

class Init_RepResult_success
{
public:
  explicit Init_RepResult_success(::coach_interfaces::msg::RepResult & msg)
  : msg_(msg)
  {}
  Init_RepResult_error_type success(::coach_interfaces::msg::RepResult::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RepResult_error_type(msg_);
  }

private:
  ::coach_interfaces::msg::RepResult msg_;
};

class Init_RepResult_header
{
public:
  Init_RepResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RepResult_success header(::coach_interfaces::msg::RepResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RepResult_success(msg_);
  }

private:
  ::coach_interfaces::msg::RepResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::coach_interfaces::msg::RepResult>()
{
  return coach_interfaces::msg::builder::Init_RepResult_header();
}

}  // namespace coach_interfaces

#endif  // COACH_INTERFACES__MSG__DETAIL__REP_RESULT__BUILDER_HPP_
