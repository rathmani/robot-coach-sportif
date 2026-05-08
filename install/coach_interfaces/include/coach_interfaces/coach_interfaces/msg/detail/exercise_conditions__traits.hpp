// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from coach_interfaces:msg/ExerciseConditions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "coach_interfaces/msg/exercise_conditions.hpp"


#ifndef COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__TRAITS_HPP_
#define COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "coach_interfaces/msg/detail/exercise_conditions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace coach_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExerciseConditions & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: elbow_stable
  {
    out << "elbow_stable: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_stable, out);
    out << ", ";
  }

  // member: back_straight
  {
    out << "back_straight: ";
    rosidl_generator_traits::value_to_yaml(msg.back_straight, out);
    out << ", ";
  }

  // member: rom_complete
  {
    out << "rom_complete: ";
    rosidl_generator_traits::value_to_yaml(msg.rom_complete, out);
    out << ", ";
  }

  // member: elbow_angle
  {
    out << "elbow_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_angle, out);
    out << ", ";
  }

  // member: back_angle
  {
    out << "back_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.back_angle, out);
    out << ", ";
  }

  // member: rom_percent
  {
    out << "rom_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.rom_percent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExerciseConditions & msg,
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

  // member: elbow_stable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elbow_stable: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_stable, out);
    out << "\n";
  }

  // member: back_straight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_straight: ";
    rosidl_generator_traits::value_to_yaml(msg.back_straight, out);
    out << "\n";
  }

  // member: rom_complete
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rom_complete: ";
    rosidl_generator_traits::value_to_yaml(msg.rom_complete, out);
    out << "\n";
  }

  // member: elbow_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elbow_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_angle, out);
    out << "\n";
  }

  // member: back_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.back_angle, out);
    out << "\n";
  }

  // member: rom_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rom_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.rom_percent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExerciseConditions & msg, bool use_flow_style = false)
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
  const coach_interfaces::msg::ExerciseConditions & msg,
  std::ostream & out, size_t indentation = 0)
{
  coach_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use coach_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const coach_interfaces::msg::ExerciseConditions & msg)
{
  return coach_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<coach_interfaces::msg::ExerciseConditions>()
{
  return "coach_interfaces::msg::ExerciseConditions";
}

template<>
inline const char * name<coach_interfaces::msg::ExerciseConditions>()
{
  return "coach_interfaces/msg/ExerciseConditions";
}

template<>
struct has_fixed_size<coach_interfaces::msg::ExerciseConditions>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<coach_interfaces::msg::ExerciseConditions>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<coach_interfaces::msg::ExerciseConditions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__TRAITS_HPP_
