// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from coach_interfaces:msg/ExerciseConditions.idl
// generated code does not contain a copyright notice
#include "coach_interfaces/msg/detail/exercise_conditions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "coach_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "coach_interfaces/msg/detail/exercise_conditions__struct.h"
#include "coach_interfaces/msg/detail/exercise_conditions__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_coach_interfaces
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_coach_interfaces
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_coach_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_coach_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_coach_interfaces
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_coach_interfaces
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_coach_interfaces
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_coach_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ExerciseConditions__ros_msg_type = coach_interfaces__msg__ExerciseConditions;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
bool cdr_serialize_coach_interfaces__msg__ExerciseConditions(
  const coach_interfaces__msg__ExerciseConditions * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: elbow_stable
  {
    cdr << (ros_message->elbow_stable ? true : false);
  }

  // Field name: back_straight
  {
    cdr << (ros_message->back_straight ? true : false);
  }

  // Field name: rom_complete
  {
    cdr << (ros_message->rom_complete ? true : false);
  }

  // Field name: elbow_angle
  {
    cdr << ros_message->elbow_angle;
  }

  // Field name: back_angle
  {
    cdr << ros_message->back_angle;
  }

  // Field name: rom_percent
  {
    cdr << ros_message->rom_percent;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
bool cdr_deserialize_coach_interfaces__msg__ExerciseConditions(
  eprosima::fastcdr::Cdr & cdr,
  coach_interfaces__msg__ExerciseConditions * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: elbow_stable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->elbow_stable = tmp ? true : false;
  }

  // Field name: back_straight
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->back_straight = tmp ? true : false;
  }

  // Field name: rom_complete
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rom_complete = tmp ? true : false;
  }

  // Field name: elbow_angle
  {
    cdr >> ros_message->elbow_angle;
  }

  // Field name: back_angle
  {
    cdr >> ros_message->back_angle;
  }

  // Field name: rom_percent
  {
    cdr >> ros_message->rom_percent;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
size_t get_serialized_size_coach_interfaces__msg__ExerciseConditions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExerciseConditions__ros_msg_type * ros_message = static_cast<const _ExerciseConditions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: elbow_stable
  {
    size_t item_size = sizeof(ros_message->elbow_stable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: back_straight
  {
    size_t item_size = sizeof(ros_message->back_straight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rom_complete
  {
    size_t item_size = sizeof(ros_message->rom_complete);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: elbow_angle
  {
    size_t item_size = sizeof(ros_message->elbow_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: back_angle
  {
    size_t item_size = sizeof(ros_message->back_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rom_percent
  {
    size_t item_size = sizeof(ros_message->rom_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
size_t max_serialized_size_coach_interfaces__msg__ExerciseConditions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: elbow_stable
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: back_straight
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: rom_complete
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: elbow_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: back_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rom_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = coach_interfaces__msg__ExerciseConditions;
    is_plain =
      (
      offsetof(DataType, rom_percent) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
bool cdr_serialize_key_coach_interfaces__msg__ExerciseConditions(
  const coach_interfaces__msg__ExerciseConditions * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: elbow_stable
  {
    cdr << (ros_message->elbow_stable ? true : false);
  }

  // Field name: back_straight
  {
    cdr << (ros_message->back_straight ? true : false);
  }

  // Field name: rom_complete
  {
    cdr << (ros_message->rom_complete ? true : false);
  }

  // Field name: elbow_angle
  {
    cdr << ros_message->elbow_angle;
  }

  // Field name: back_angle
  {
    cdr << ros_message->back_angle;
  }

  // Field name: rom_percent
  {
    cdr << ros_message->rom_percent;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
size_t get_serialized_size_key_coach_interfaces__msg__ExerciseConditions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExerciseConditions__ros_msg_type * ros_message = static_cast<const _ExerciseConditions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: elbow_stable
  {
    size_t item_size = sizeof(ros_message->elbow_stable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: back_straight
  {
    size_t item_size = sizeof(ros_message->back_straight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rom_complete
  {
    size_t item_size = sizeof(ros_message->rom_complete);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: elbow_angle
  {
    size_t item_size = sizeof(ros_message->elbow_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: back_angle
  {
    size_t item_size = sizeof(ros_message->back_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rom_percent
  {
    size_t item_size = sizeof(ros_message->rom_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
size_t max_serialized_size_key_coach_interfaces__msg__ExerciseConditions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: elbow_stable
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: back_straight
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: rom_complete
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: elbow_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: back_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rom_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = coach_interfaces__msg__ExerciseConditions;
    is_plain =
      (
      offsetof(DataType, rom_percent) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ExerciseConditions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const coach_interfaces__msg__ExerciseConditions * ros_message = static_cast<const coach_interfaces__msg__ExerciseConditions *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_coach_interfaces__msg__ExerciseConditions(ros_message, cdr);
}

static bool _ExerciseConditions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  coach_interfaces__msg__ExerciseConditions * ros_message = static_cast<coach_interfaces__msg__ExerciseConditions *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_coach_interfaces__msg__ExerciseConditions(cdr, ros_message);
}

static uint32_t _ExerciseConditions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_coach_interfaces__msg__ExerciseConditions(
      untyped_ros_message, 0));
}

static size_t _ExerciseConditions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_coach_interfaces__msg__ExerciseConditions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ExerciseConditions = {
  "coach_interfaces::msg",
  "ExerciseConditions",
  _ExerciseConditions__cdr_serialize,
  _ExerciseConditions__cdr_deserialize,
  _ExerciseConditions__get_serialized_size,
  _ExerciseConditions__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ExerciseConditions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExerciseConditions,
  get_message_typesupport_handle_function,
  &coach_interfaces__msg__ExerciseConditions__get_type_hash,
  &coach_interfaces__msg__ExerciseConditions__get_type_description,
  &coach_interfaces__msg__ExerciseConditions__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coach_interfaces, msg, ExerciseConditions)() {
  return &_ExerciseConditions__type_support;
}

#if defined(__cplusplus)
}
#endif
