#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "micro_ros_msgs::micro_ros_msgs__rosidl_generator_py" for configuration ""
set_property(TARGET micro_ros_msgs::micro_ros_msgs__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(micro_ros_msgs::micro_ros_msgs__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmicro_ros_msgs__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libmicro_ros_msgs__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS micro_ros_msgs::micro_ros_msgs__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_micro_ros_msgs::micro_ros_msgs__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libmicro_ros_msgs__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
