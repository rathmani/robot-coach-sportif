#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "coach_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__coach_interfaces__msg__ExerciseConditions() -> *const std::ffi::c_void;
}

#[link(name = "coach_interfaces__rosidl_generator_c")]
extern "C" {
    fn coach_interfaces__msg__ExerciseConditions__init(msg: *mut ExerciseConditions) -> bool;
    fn coach_interfaces__msg__ExerciseConditions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExerciseConditions>, size: usize) -> bool;
    fn coach_interfaces__msg__ExerciseConditions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExerciseConditions>);
    fn coach_interfaces__msg__ExerciseConditions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExerciseConditions>, out_seq: *mut rosidl_runtime_rs::Sequence<ExerciseConditions>) -> bool;
}

// Corresponds to coach_interfaces__msg__ExerciseConditions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExerciseConditions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub elbow_stable: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub back_straight: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rom_complete: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub elbow_angle: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub back_angle: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rom_percent: f32,

}



impl Default for ExerciseConditions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !coach_interfaces__msg__ExerciseConditions__init(&mut msg as *mut _) {
        panic!("Call to coach_interfaces__msg__ExerciseConditions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExerciseConditions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { coach_interfaces__msg__ExerciseConditions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { coach_interfaces__msg__ExerciseConditions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { coach_interfaces__msg__ExerciseConditions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExerciseConditions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExerciseConditions where Self: Sized {
  const TYPE_NAME: &'static str = "coach_interfaces/msg/ExerciseConditions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__coach_interfaces__msg__ExerciseConditions() }
  }
}


#[link(name = "coach_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__coach_interfaces__msg__RepResult() -> *const std::ffi::c_void;
}

#[link(name = "coach_interfaces__rosidl_generator_c")]
extern "C" {
    fn coach_interfaces__msg__RepResult__init(msg: *mut RepResult) -> bool;
    fn coach_interfaces__msg__RepResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RepResult>, size: usize) -> bool;
    fn coach_interfaces__msg__RepResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RepResult>);
    fn coach_interfaces__msg__RepResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RepResult>, out_seq: *mut rosidl_runtime_rs::Sequence<RepResult>) -> bool;
}

// Corresponds to coach_interfaces__msg__RepResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RepResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback_message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rep_count: i32,

}



impl Default for RepResult {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !coach_interfaces__msg__RepResult__init(&mut msg as *mut _) {
        panic!("Call to coach_interfaces__msg__RepResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RepResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { coach_interfaces__msg__RepResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { coach_interfaces__msg__RepResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { coach_interfaces__msg__RepResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RepResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RepResult where Self: Sized {
  const TYPE_NAME: &'static str = "coach_interfaces/msg/RepResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__coach_interfaces__msg__RepResult() }
  }
}


