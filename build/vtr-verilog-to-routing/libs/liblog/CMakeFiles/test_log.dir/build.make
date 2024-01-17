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
include vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/compiler_depend.make

# Include the progress variables for this target.
include vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/progress.make

# Include the compile flags for this target's objects.
include vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/flags.make

vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/src/main.cpp.o: vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/flags.make
vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/src/main.cpp.o: ../vtr-verilog-to-routing/libs/liblog/src/main.cpp
vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/src/main.cpp.o: vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/src/main.cpp.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/liblog && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/src/main.cpp.o -MF CMakeFiles/test_log.dir/src/main.cpp.o.d -o CMakeFiles/test_log.dir/src/main.cpp.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/liblog/src/main.cpp

vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_log.dir/src/main.cpp.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/liblog && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/liblog/src/main.cpp > CMakeFiles/test_log.dir/src/main.cpp.i

vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_log.dir/src/main.cpp.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/liblog && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/liblog/src/main.cpp -o CMakeFiles/test_log.dir/src/main.cpp.s

# Object files for target test_log
test_log_OBJECTS = \
"CMakeFiles/test_log.dir/src/main.cpp.o"

# External object files for target test_log
test_log_EXTERNAL_OBJECTS =

vtr-verilog-to-routing/libs/liblog/test_log: vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/src/main.cpp.o
vtr-verilog-to-routing/libs/liblog/test_log: vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/build.make
vtr-verilog-to-routing/libs/liblog/test_log: vtr-verilog-to-routing/libs/liblog/liblog.a
vtr-verilog-to-routing/libs/liblog/test_log: vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_log"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/liblog && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_log.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/build: vtr-verilog-to-routing/libs/liblog/test_log
.PHONY : vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/build

vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/clean:
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/liblog && $(CMAKE_COMMAND) -P CMakeFiles/test_log.dir/cmake_clean.cmake
.PHONY : vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/clean

vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/depend:
	cd /home/nouran/OpenFPGA/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nouran/OpenFPGA /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/liblog /home/nouran/OpenFPGA/build /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/liblog /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vtr-verilog-to-routing/libs/liblog/CMakeFiles/test_log.dir/depend

