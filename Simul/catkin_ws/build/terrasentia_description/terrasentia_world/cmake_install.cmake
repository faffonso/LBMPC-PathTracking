# Install script for directory: /home/faffonso/Documentos/IC/Algoritmos/LBMPC-PathTracking/Simul/catkin_ws/src/terrasentia_description/terrasentia_world

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/faffonso/Documentos/IC/Algoritmos/LBMPC-PathTracking/Simul/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/faffonso/Documentos/IC/Algoritmos/LBMPC-PathTracking/Simul/catkin_ws/build/terrasentia_description/terrasentia_world/catkin_generated/installspace/terrasentia_world.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/terrasentia_world/cmake" TYPE FILE FILES
    "/home/faffonso/Documentos/IC/Algoritmos/LBMPC-PathTracking/Simul/catkin_ws/build/terrasentia_description/terrasentia_world/catkin_generated/installspace/terrasentia_worldConfig.cmake"
    "/home/faffonso/Documentos/IC/Algoritmos/LBMPC-PathTracking/Simul/catkin_ws/build/terrasentia_description/terrasentia_world/catkin_generated/installspace/terrasentia_worldConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/terrasentia_world" TYPE FILE FILES "/home/faffonso/Documentos/IC/Algoritmos/LBMPC-PathTracking/Simul/catkin_ws/src/terrasentia_description/terrasentia_world/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/terrasentia_world/config" TYPE DIRECTORY FILES "/home/faffonso/Documentos/IC/Algoritmos/LBMPC-PathTracking/Simul/catkin_ws/src/terrasentia_description/terrasentia_world/config/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/terrasentia_world/launch" TYPE DIRECTORY FILES "/home/faffonso/Documentos/IC/Algoritmos/LBMPC-PathTracking/Simul/catkin_ws/src/terrasentia_description/terrasentia_world/launch/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/terrasentia_world/meshes" TYPE DIRECTORY FILES "/home/faffonso/Documentos/IC/Algoritmos/LBMPC-PathTracking/Simul/catkin_ws/src/terrasentia_description/terrasentia_world/meshes/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/terrasentia_world/urdf" TYPE DIRECTORY FILES "/home/faffonso/Documentos/IC/Algoritmos/LBMPC-PathTracking/Simul/catkin_ws/src/terrasentia_description/terrasentia_world/urdf/")
endif()

