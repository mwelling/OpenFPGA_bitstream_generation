# Install script for directory: /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE STATIC_LIBRARY FILES "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvtrutil/libvtrutil.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libvtrutil" TYPE FILE FILES
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/picosha2.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vpr_error.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_array_view.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_assert.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_bimap.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_cache.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_color_map.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_digest.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_dynamic_bitset.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_error.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_expr_eval.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_flat_map.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_geometry.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_hash.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_linear_map.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_list.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_log.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_logic.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_map_util.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_math.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_memory.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_ndmatrix.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_ndoffsetmatrix.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_ostream_guard.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_pair_util.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_path.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_ragged_matrix.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_random.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_range.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_rusage.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_sentinels.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_small_vector.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_string_interning.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_string_view.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_strong_id.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_strong_id_range.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_time.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_token.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_util.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_vec_id_set.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_vector.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_vector_map.h"
    "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil/src/vtr_version.h"
    )
endif()

