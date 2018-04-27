# Install script for directory: /Users/adamd/src/old-web-chall/previous-code/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Applications/Previous.app")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/Applications" TYPE DIRECTORY FILES "/Users/adamd/src/old-web-chall/previous-code/build/src/Previous.app" USE_SOURCE_PERMISSIONS)
  if(EXISTS "$ENV{DESTDIR}/Applications/Previous.app/Contents/MacOS/Previous" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/Applications/Previous.app/Contents/MacOS/Previous")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/adamd/src/old-web-chall/previous-code/build/src/debug"
      "$ENV{DESTDIR}/Applications/Previous.app/Contents/MacOS/Previous")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/adamd/src/old-web-chall/previous-code/build/src/softfloat"
      "$ENV{DESTDIR}/Applications/Previous.app/Contents/MacOS/Previous")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/adamd/src/old-web-chall/previous-code/build/src/gui-sdl"
      "$ENV{DESTDIR}/Applications/Previous.app/Contents/MacOS/Previous")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/adamd/src/old-web-chall/previous-code/build/src/cpu"
      "$ENV{DESTDIR}/Applications/Previous.app/Contents/MacOS/Previous")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/adamd/src/old-web-chall/previous-code/build/src/dsp"
      "$ENV{DESTDIR}/Applications/Previous.app/Contents/MacOS/Previous")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/adamd/src/old-web-chall/previous-code/build/src/dimension"
      "$ENV{DESTDIR}/Applications/Previous.app/Contents/MacOS/Previous")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/adamd/src/old-web-chall/previous-code/build/src/slirp"
      "$ENV{DESTDIR}/Applications/Previous.app/Contents/MacOS/Previous")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Library/Frameworks"
      "$ENV{DESTDIR}/Applications/Previous.app/Contents/MacOS/Previous")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/adamd/src/old-web-chall/previous-code/build/src/debug/cmake_install.cmake")
  include("/Users/adamd/src/old-web-chall/previous-code/build/src/softfloat/cmake_install.cmake")
  include("/Users/adamd/src/old-web-chall/previous-code/build/src/gui-sdl/cmake_install.cmake")
  include("/Users/adamd/src/old-web-chall/previous-code/build/src/cpu/cmake_install.cmake")
  include("/Users/adamd/src/old-web-chall/previous-code/build/src/dsp/cmake_install.cmake")
  include("/Users/adamd/src/old-web-chall/previous-code/build/src/dimension/cmake_install.cmake")
  include("/Users/adamd/src/old-web-chall/previous-code/build/src/slirp/cmake_install.cmake")

endif()

