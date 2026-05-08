// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from coach_interfaces:msg/ExerciseConditions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "coach_interfaces/msg/exercise_conditions.hpp"


#ifndef COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__STRUCT_HPP_
#define COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__coach_interfaces__msg__ExerciseConditions __attribute__((deprecated))
#else
# define DEPRECATED__coach_interfaces__msg__ExerciseConditions __declspec(deprecated)
#endif

namespace coach_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExerciseConditions_
{
  using Type = ExerciseConditions_<ContainerAllocator>;

  explicit ExerciseConditions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elbow_stable = false;
      this->back_straight = false;
      this->rom_complete = false;
      this->elbow_angle = 0.0f;
      this->back_angle = 0.0f;
      this->rom_percent = 0.0f;
    }
  }

  explicit ExerciseConditions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elbow_stable = false;
      this->back_straight = false;
      this->rom_complete = false;
      this->elbow_angle = 0.0f;
      this->back_angle = 0.0f;
      this->rom_percent = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _elbow_stable_type =
    bool;
  _elbow_stable_type elbow_stable;
  using _back_straight_type =
    bool;
  _back_straight_type back_straight;
  using _rom_complete_type =
    bool;
  _rom_complete_type rom_complete;
  using _elbow_angle_type =
    float;
  _elbow_angle_type elbow_angle;
  using _back_angle_type =
    float;
  _back_angle_type back_angle;
  using _rom_percent_type =
    float;
  _rom_percent_type rom_percent;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__elbow_stable(
    const bool & _arg)
  {
    this->elbow_stable = _arg;
    return *this;
  }
  Type & set__back_straight(
    const bool & _arg)
  {
    this->back_straight = _arg;
    return *this;
  }
  Type & set__rom_complete(
    const bool & _arg)
  {
    this->rom_complete = _arg;
    return *this;
  }
  Type & set__elbow_angle(
    const float & _arg)
  {
    this->elbow_angle = _arg;
    return *this;
  }
  Type & set__back_angle(
    const float & _arg)
  {
    this->back_angle = _arg;
    return *this;
  }
  Type & set__rom_percent(
    const float & _arg)
  {
    this->rom_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coach_interfaces::msg::ExerciseConditions_<ContainerAllocator> *;
  using ConstRawPtr =
    const coach_interfaces::msg::ExerciseConditions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coach_interfaces::msg::ExerciseConditions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coach_interfaces::msg::ExerciseConditions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coach_interfaces::msg::ExerciseConditions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coach_interfaces::msg::ExerciseConditions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coach_interfaces::msg::ExerciseConditions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coach_interfaces::msg::ExerciseConditions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coach_interfaces::msg::ExerciseConditions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coach_interfaces::msg::ExerciseConditions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coach_interfaces__msg__ExerciseConditions
    std::shared_ptr<coach_interfaces::msg::ExerciseConditions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coach_interfaces__msg__ExerciseConditions
    std::shared_ptr<coach_interfaces::msg::ExerciseConditions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExerciseConditions_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->elbow_stable != other.elbow_stable) {
      return false;
    }
    if (this->back_straight != other.back_straight) {
      return false;
    }
    if (this->rom_complete != other.rom_complete) {
      return false;
    }
    if (this->elbow_angle != other.elbow_angle) {
      return false;
    }
    if (this->back_angle != other.back_angle) {
      return false;
    }
    if (this->rom_percent != other.rom_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExerciseConditions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExerciseConditions_

// alias to use template instance with default allocator
using ExerciseConditions =
  coach_interfaces::msg::ExerciseConditions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace coach_interfaces

#endif  // COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__STRUCT_HPP_
