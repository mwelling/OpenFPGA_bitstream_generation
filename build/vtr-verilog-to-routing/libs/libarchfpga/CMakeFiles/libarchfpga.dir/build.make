# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nouran/OpenFPGA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nouran/OpenFPGA/build

# Include any dependencies generated for this target.
include vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.make

# Include the progress variables for this target.
include vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/progress.make

# Include the compile flags for this target's objects.
include vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_check.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_check.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/arch_check.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_check.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_check.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_check.cpp.o -MF CMakeFiles/libarchfpga.dir/src/arch_check.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/arch_check.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_check.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_check.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/arch_check.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_check.cpp > CMakeFiles/libarchfpga.dir/src/arch_check.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_check.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/arch_check.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_check.cpp -o CMakeFiles/libarchfpga.dir/src/arch_check.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_error.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_error.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/arch_error.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_error.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_error.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_error.cpp.o -MF CMakeFiles/libarchfpga.dir/src/arch_error.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/arch_error.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_error.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_error.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/arch_error.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_error.cpp > CMakeFiles/libarchfpga.dir/src/arch_error.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_error.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/arch_error.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_error.cpp -o CMakeFiles/libarchfpga.dir/src/arch_error.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_util.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_util.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/arch_util.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_util.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_util.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_util.cpp.o -MF CMakeFiles/libarchfpga.dir/src/arch_util.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/arch_util.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_util.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/arch_util.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_util.cpp > CMakeFiles/libarchfpga.dir/src/arch_util.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/arch_util.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/arch_util.cpp -o CMakeFiles/libarchfpga.dir/src/arch_util.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/device_grid.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/device_grid.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/device_grid.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/device_grid.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/device_grid.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/device_grid.cpp.o -MF CMakeFiles/libarchfpga.dir/src/device_grid.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/device_grid.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/device_grid.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/device_grid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/device_grid.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/device_grid.cpp > CMakeFiles/libarchfpga.dir/src/device_grid.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/device_grid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/device_grid.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/device_grid.cpp -o CMakeFiles/libarchfpga.dir/src/device_grid.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/echo_arch.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.o -MF CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/echo_arch.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/echo_arch.cpp > CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/echo_arch.cpp -o CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/histogram.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/histogram.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/histogram.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/histogram.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/histogram.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/histogram.cpp.o -MF CMakeFiles/libarchfpga.dir/src/histogram.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/histogram.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/histogram.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/histogram.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/histogram.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/histogram.cpp > CMakeFiles/libarchfpga.dir/src/histogram.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/histogram.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/histogram.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/histogram.cpp -o CMakeFiles/libarchfpga.dir/src/histogram.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/parse_switchblocks.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.o -MF CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/parse_switchblocks.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/parse_switchblocks.cpp > CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/parse_switchblocks.cpp -o CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/physical_types.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types.cpp.o -MF CMakeFiles/libarchfpga.dir/src/physical_types.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/physical_types.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/physical_types.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/physical_types.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/physical_types.cpp > CMakeFiles/libarchfpga.dir/src/physical_types.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/physical_types.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/physical_types.cpp -o CMakeFiles/libarchfpga.dir/src/physical_types.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/physical_types_util.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.o -MF CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/physical_types_util.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/physical_types_util.cpp > CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/physical_types_util.cpp -o CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/read_fpga_interchange_arch.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.o -MF CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_fpga_interchange_arch.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_fpga_interchange_arch.cpp > CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_fpga_interchange_arch.cpp -o CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/read_xml_arch_file.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.o -MF CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_xml_arch_file.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_xml_arch_file.cpp > CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_xml_arch_file.cpp -o CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/read_xml_util.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.o -MF CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_xml_util.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_xml_util.cpp > CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/read_xml_util.cpp -o CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.s

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/flags.make
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.o: ../vtr-verilog-to-routing/libs/libarchfpga/src/write_models_bb.cpp
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.o: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.o -MF CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.o.d -o CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/write_models_bb.cpp

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/write_models_bb.cpp > CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.i

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga/src/write_models_bb.cpp -o CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.s

# Object files for target libarchfpga
libarchfpga_OBJECTS = \
"CMakeFiles/libarchfpga.dir/src/arch_check.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/arch_error.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/arch_util.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/device_grid.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/histogram.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/physical_types.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.o" \
"CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.o"

# External object files for target libarchfpga
libarchfpga_EXTERNAL_OBJECTS =

vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_check.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_error.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/arch_util.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/device_grid.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/echo_arch.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/histogram.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/parse_switchblocks.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/physical_types_util.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_fpga_interchange_arch.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_arch_file.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/read_xml_util.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/src/write_models_bb.cpp.o
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/build.make
vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a: vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX static library libarchfpga.a"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && $(CMAKE_COMMAND) -P CMakeFiles/libarchfpga.dir/cmake_clean_target.cmake
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libarchfpga.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/build: vtr-verilog-to-routing/libs/libarchfpga/libarchfpga.a
.PHONY : vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/build

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/clean:
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga && $(CMAKE_COMMAND) -P CMakeFiles/libarchfpga.dir/cmake_clean.cmake
.PHONY : vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/clean

vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/depend:
	cd /home/nouran/OpenFPGA/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nouran/OpenFPGA /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga /home/nouran/OpenFPGA/build /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vtr-verilog-to-routing/libs/libarchfpga/CMakeFiles/libarchfpga.dir/depend

