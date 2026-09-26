# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target message_interface::message_interface
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${message_interface_TARGETS}.
if(message_interface_TARGETS AND NOT TARGET message_interface::message_interface)
  add_library(message_interface::message_interface INTERFACE IMPORTED)
  set_target_properties(message_interface::message_interface PROPERTIES
    INTERFACE_LINK_LIBRARIES "${message_interface_TARGETS}")
endif()
