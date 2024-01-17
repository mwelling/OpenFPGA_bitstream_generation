# Install script for directory: /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nouran/OpenFPGA/build")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "release")
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

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE STATIC_LIBRARY FILES "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libarchfpga" TYPE FILE FILES
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_check.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_error.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_types.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_util.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/cad_types.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/clock_types.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/device_grid.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/echo_arch.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/histogram.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/logic_types.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/parse_switchblocks.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/physical_types.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/physical_types_util.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_fpga_interchange_arch.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_xml_arch_file.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_xml_util.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/write_models_bb.h"
    )
endif()

