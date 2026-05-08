// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from coach_interfaces:msg/ExerciseConditions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "coach_interfaces/msg/exercise_conditions.hpp"


#ifndef COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__BUILDER_HPP_
#define COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "coach_interfaces/msg/detail/exercise_conditions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace coach_interfaces
{

namespace msg
{

namespace builder
{

class Init_ExerciseConditions_rom_percent
{
public:
  explicit Init_ExerciseConditions_rom_percent(::coach_interfaces::msg::ExerciseConditions & msg)
  : msg_(msg)
  {}
  ::coach_interfaces::msg::ExerciseConditions rom_percent(::coach_interfaces::msg::ExerciseConditions::_rom_percent_type arg)
  {
    msg_.rom_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coach_interfaces::msg::ExerciseConditions msg_;
};

class Init_ExerciseConditions_back_angle
{
public:
  explicit Init_ExerciseConditions_back_angle(::coach_interfaces::msg::ExerciseConditions & msg)
  : msg_(msg)
  {}
  Init_ExerciseConditions_rom_percent back_angle(::coach_interfaces::msg::ExerciseConditions::_back_angle_type arg)
  {
    msg_.back_angle = std::move(arg);
    return Init_ExerciseConditions_rom_percent(msg_);
  }

private:
  ::coach_interfaces::msg::ExerciseConditions msg_;
};

class Init_ExerciseConditions_elbow_angle
{
public:
  explicit Init_ExerciseConditions_elbow_angle(::coach_interfaces::msg::ExerciseConditions & msg)
  : msg_(msg)
  {}
  Init_ExerciseConditions_back_angle elbow_angle(::coach_interfaces::msg::ExerciseConditions::_elbow_angle_type arg)
  {
    msg_.elbow_angle = std::move(arg);
    return Init_ExerciseConditions_back_angle(msg_);
  }

private:
  ::coach_interfaces::msg::ExerciseConditions msg_;
};

class Init_ExerciseConditions_rom_complete
{
public:
  explicit Init_ExerciseConditions_rom_complete(::coach_interfaces::msg::ExerciseConditions & msg)
  : msg_(msg)
  {}
  Init_ExerciseConditions_elbow_angle rom_complete(::coach_interfaces::msg::ExerciseConditions::_rom_complete_type arg)
  {
    msg_.rom_complete = std::move(arg);
    return Init_ExerciseConditions_elbow_angle(msg_);
  }

private:
  ::coach_interfaces::msg::ExerciseConditions msg_;
};

class Init_ExerciseConditions_back_straight
{
public:
  explicit Init_ExerciseConditions_back_straight(::coach_interfaces::msg::ExerciseConditions & msg)
  : msg_(msg)
  {}
  Init_ExerciseConditions_rom_complete back_straight(::coach_interfaces::msg::ExerciseConditions::_back_straight_type arg)
  {
    msg_.back_straight = std::move(arg);
    return Init_ExerciseConditions_rom_complete(msg_);
  }

private:
  ::coach_interfaces::msg::ExerciseConditions msg_;
};

class Init_ExerciseConditions_elbow_stable
{
public:
  explicit Init_ExerciseConditions_elbow_stable(::coach_interfaces::msg::ExerciseConditions & msg)
  : msg_(msg)
  {}
  Init_ExerciseConditions_back_straight elbow_stable(::coach_interfaces::msg::ExerciseConditions::_elbow_stable_type arg)
  {
    msg_.elbow_stable = std::move(arg);
    return Init_ExerciseConditions_back_straight(msg_);
  }

private:
  ::coach_interfaces::msg::ExerciseConditions msg_;
};

class Init_ExerciseConditions_header
{
public:
  Init_ExerciseConditions_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExerciseConditions_elbow_stable header(::coach_interfaces::msg::ExerciseConditions::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExerciseConditions_elbow_stable(msg_);
  }

private:
  ::coach_interfaces::msg::ExerciseConditions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::coach_interfaces::msg::ExerciseConditions>()
{
  return coach_interfaces::msg::builder::Init_ExerciseConditions_header();
}

}  // namespace coach_interfaces

#endif  // COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__BUILDER_HPP_
