#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "message_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__message_interface__msg__NodeMessage() -> *const std::ffi::c_void;
}

#[link(name = "message_interface__rosidl_generator_c")]
extern "C" {
    fn message_interface__msg__NodeMessage__init(msg: *mut NodeMessage) -> bool;
    fn message_interface__msg__NodeMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NodeMessage>, size: usize) -> bool;
    fn message_interface__msg__NodeMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NodeMessage>);
    fn message_interface__msg__NodeMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NodeMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<NodeMessage>) -> bool;
}

// Corresponds to message_interface__msg__NodeMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::String,

}



impl Default for NodeMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !message_interface__msg__NodeMessage__init(&mut msg as *mut _) {
        panic!("Call to message_interface__msg__NodeMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NodeMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { message_interface__msg__NodeMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { message_interface__msg__NodeMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { message_interface__msg__NodeMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NodeMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NodeMessage where Self: Sized {
  const TYPE_NAME: &'static str = "message_interface/msg/NodeMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__message_interface__msg__NodeMessage() }
  }
}


