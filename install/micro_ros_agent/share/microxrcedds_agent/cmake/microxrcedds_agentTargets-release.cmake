#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "microxrcedds_agent" for configuration "Release"
set_property(TARGET microxrcedds_agent APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(microxrcedds_agent PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "fastrtps"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmicroxrcedds_agent.so.2.4.1"
  IMPORTED_SONAME_RELEASE "libmicroxrcedds_agent.so.2.4"
  )

list(APPEND _IMPORT_CHECK_TARGETS microxrcedds_agent )
list(APPEND _IMPORT_CHECK_FILES_FOR_microxrcedds_agent "${_IMPORT_PREFIX}/lib/libmicroxrcedds_agent.so.2.4.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
