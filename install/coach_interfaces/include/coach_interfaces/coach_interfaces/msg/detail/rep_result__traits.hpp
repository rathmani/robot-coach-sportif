// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from coach_interfaces:msg/RepResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "coach_interfaces/msg/rep_result.hpp"


#ifndef COACH_INTERFACES__MSG__DETAIL__REP_RESULT__TRAITS_HPP_
#define COACH_INTERFACES__MSG__DETAIL__REP_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "coach_interfaces/msg/detail/rep_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace coach_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RepResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error_type
  {
    out << "error_type: ";
    rosidl_generator_traits::value_to_yaml(msg.error_type, out);
    out << ", ";
  }

  // member: feedback_message
  {
    out << "feedback_message: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_message, out);
    out << ", ";
  }

  // member: rep_count
  {
    out << "rep_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rep_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RepResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_type: ";
    rosidl_generator_traits::value_to_yaml(msg.error_type, out);
    out << "\n";
  }

  // member: feedback_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_message: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_message, out);
    out << "\n";
  }

  // member: rep_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rep_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rep_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RepResult & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace coach_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use coach_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const coach_interfaces::msg::RepResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  coach_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use coach_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const coach_interfaces::msg::RepResult & msg)
{
  return coach_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<coach_interfaces::msg::RepResult>()
{
  return "coach_interfaces::msg::RepResult";
}

template<>
inline const char * name<coach_interfaces::msg::RepResult>()
{
  return "coach_interfaces/msg/RepResult";
}

template<>
struct has_fixed_size<coach_interfaces::msg::RepResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<coach_interfaces::msg::RepResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<coach_interfaces::msg::RepResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COACH_INTERFACES__MSG__DETAIL__REP_RESULT__TRAITS_HPP_
