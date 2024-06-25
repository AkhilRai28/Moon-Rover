# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_micro_ros_setup_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED micro_ros_setup_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(micro_ros_setup_FOUND FALSE)
  elseif(NOT micro_ros_setup_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(micro_ros_setup_FOUND FALSE)
  endif()
  return()
endif()
set(_micro_ros_setup_CONFIG_INCLUDED TRUE)

# output package information
if(NOT micro_ros_setup_FIND_QUIETLY)
  message(STATUS "Found micro_ros_setup: 3.1.3 (${micro_ros_setup_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'micro_ros_setup' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${micro_ros_setup_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(micro_ros_setup_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${micro_ros_setup_DIR}/${_extra}")
endforeach()
