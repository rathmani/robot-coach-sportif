// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from coach_interfaces:msg/RepResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "coach_interfaces/msg/rep_result.hpp"


#ifndef COACH_INTERFACES__MSG__DETAIL__REP_RESULT__STRUCT_HPP_
#define COACH_INTERFACES__MSG__DETAIL__REP_RESULT__STRUCT_HPP_

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
# define DEPRECATED__coach_interfaces__msg__RepResult __attribute__((deprecated))
#else
# define DEPRECATED__coach_interfaces__msg__RepResult __declspec(deprecated)
#endif

namespace coach_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RepResult_
{
  using Type = RepResult_<ContainerAllocator>;

  explicit RepResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_type = "";
      this->feedback_message = "";
      this->rep_count = 0l;
    }
  }

  explicit RepResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    error_type(_alloc),
    feedback_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_type = "";
      this->feedback_message = "";
      this->rep_count = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _success_type =
    bool;
  _success_type success;
  using _error_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type_type error_type;
  using _feedback_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_message_type feedback_message;
  using _rep_count_type =
    int32_t;
  _rep_count_type rep_count;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_type = _arg;
    return *this;
  }
  Type & set__feedback_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback_message = _arg;
    return *this;
  }
  Type & set__rep_count(
    const int32_t & _arg)
  {
    this->rep_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coach_interfaces::msg::RepResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const coach_interfaces::msg::RepResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coach_interfaces::msg::RepResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coach_interfaces::msg::RepResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coach_interfaces::msg::RepResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coach_interfaces::msg::RepResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coach_interfaces::msg::RepResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coach_interfaces::msg::RepResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coach_interfaces::msg::RepResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coach_interfaces::msg::RepResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coach_interfaces__msg__RepResult
    std::shared_ptr<coach_interfaces::msg::RepResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coach_interfaces__msg__RepResult
    std::shared_ptr<coach_interfaces::msg::RepResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RepResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->error_type != other.error_type) {
      return false;
    }
    if (this->feedback_message != other.feedback_message) {
      return false;
    }
    if (this->rep_count != other.rep_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const RepResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RepResult_

// alias to use template instance with default allocator
using RepResult =
  coach_interfaces::msg::RepResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace coach_interfaces

#endif  // COACH_INTERFACES__MSG__DETAIL__REP_RESULT__STRUCT_HPP_
