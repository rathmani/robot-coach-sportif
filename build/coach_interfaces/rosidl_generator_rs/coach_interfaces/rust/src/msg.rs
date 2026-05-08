#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to coach_interfaces__msg__ExerciseConditions

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExerciseConditions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ExerciseConditions::default())
  }
}

impl rosidl_runtime_rs::Message for ExerciseConditions {
  type RmwMsg = super::msg::rmw::ExerciseConditions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        elbow_stable: msg.elbow_stable,
        back_straight: msg.back_straight,
        rom_complete: msg.rom_complete,
        elbow_angle: msg.elbow_angle,
        back_angle: msg.back_angle,
        rom_percent: msg.rom_percent,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      elbow_stable: msg.elbow_stable,
      back_straight: msg.back_straight,
      rom_complete: msg.rom_complete,
      elbow_angle: msg.elbow_angle,
      back_angle: msg.back_angle,
      rom_percent: msg.rom_percent,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      elbow_stable: msg.elbow_stable,
      back_straight: msg.back_straight,
      rom_complete: msg.rom_complete,
      elbow_angle: msg.elbow_angle,
      back_angle: msg.back_angle,
      rom_percent: msg.rom_percent,
    }
  }
}


// Corresponds to coach_interfaces__msg__RepResult

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RepResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback_message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rep_count: i32,

}



impl Default for RepResult {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RepResult::default())
  }
}

impl rosidl_runtime_rs::Message for RepResult {
  type RmwMsg = super::msg::rmw::RepResult;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        success: msg.success,
        error_type: msg.error_type.as_str().into(),
        feedback_message: msg.feedback_message.as_str().into(),
        rep_count: msg.rep_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      success: msg.success,
        error_type: msg.error_type.as_str().into(),
        feedback_message: msg.feedback_message.as_str().into(),
      rep_count: msg.rep_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      success: msg.success,
      error_type: msg.error_type.to_string(),
      feedback_message: msg.feedback_message.to_string(),
      rep_count: msg.rep_count,
    }
  }
}


