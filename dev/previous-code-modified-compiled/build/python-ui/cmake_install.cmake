# Install script for directory: /Users/adamd/src/old-web-chall/previous-code/python-ui

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/Users/adamd/src/old-web-chall/previous-code/python-ui/hatariui")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/previous/hatariui" TYPE PROGRAM FILES
    "/Users/adamd/src/old-web-chall/previous-code/python-ui/config.py"
    "/Users/adamd/src/old-web-chall/previous-code/python-ui/dialogs.py"
    "/Users/adamd/src/old-web-chall/previous-code/python-ui/hatari.py"
    "/Users/adamd/src/old-web-chall/previous-code/python-ui/uihelpers.py"
    "/Users/adamd/src/old-web-chall/previous-code/python-ui/hatariui.py"
    "/Users/adamd/src/old-web-chall/previous-code/python-ui/debugui.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/previous/hatariui" TYPE FILE FILES
    "/Users/adamd/src/old-web-chall/previous-code/python-ui/README"
    "/Users/adamd/src/old-web-chall/previous-code/python-ui/TODO"
    "/Users/adamd/src/old-web-chall/previous-code/python-ui/release-notes.txt"
    "/Users/adamd/src/old-web-chall/previous-code/python-ui/hatari-icon.png"
    "/Users/adamd/src/old-web-chall/previous-code/python-ui/hatari.png"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/apps" TYPE FILE FILES "/Users/adamd/src/old-web-chall/previous-code/python-ui/hatari-icon.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/Users/adamd/src/old-web-chall/previous-code/python-ui/hatariui.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/Users/adamd/src/old-web-chall/previous-code/build/python-ui/hatariui.1.gz")
endif()

