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
include vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler_depend.make

# Include the progress variables for this target.
include vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/progress.make

# Include the compile flags for this target's objects.
include vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/flags.make

vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.o: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/flags.make
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.o: ../vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/compiler/module-loader.c++
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.o: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.o -MF CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.o.d -o CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/compiler/module-loader.c++

vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/compiler/module-loader.c++ > CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.i

vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/compiler/module-loader.c++ -o CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.s

vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/capnp.c++.o: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/flags.make
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/capnp.c++.o: ../vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/compiler/capnp.c++
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/capnp.c++.o: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/capnp.c++.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/capnp.c++.o -MF CMakeFiles/capnp_tool.dir/compiler/capnp.c++.o.d -o CMakeFiles/capnp_tool.dir/compiler/capnp.c++.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/compiler/capnp.c++

vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/capnp.c++.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/capnp_tool.dir/compiler/capnp.c++.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/compiler/capnp.c++ > CMakeFiles/capnp_tool.dir/compiler/capnp.c++.i

vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/capnp.c++.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/capnp_tool.dir/compiler/capnp.c++.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/compiler/capnp.c++ -o CMakeFiles/capnp_tool.dir/compiler/capnp.c++.s

# Object files for target capnp_tool
capnp_tool_OBJECTS = \
"CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.o" \
"CMakeFiles/capnp_tool.dir/compiler/capnp.c++.o"

# External object files for target capnp_tool
capnp_tool_EXTERNAL_OBJECTS =

vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/capnp: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/module-loader.c++.o
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/capnp: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/compiler/capnp.c++.o
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/capnp: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/build.make
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/capnp: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/libcapnpc.a
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/capnp: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/libcapnp-json.a
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/capnp: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/libcapnp.a
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/capnp: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/kj/libkj.a
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/capnp: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/kj/libkj-async.a
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/capnp: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/kj/libkj.a
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/capnp: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable capnp"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/capnp_tool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/build: vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/capnp
.PHONY : vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/build

vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/clean:
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp && $(CMAKE_COMMAND) -P CMakeFiles/capnp_tool.dir/cmake_clean.cmake
.PHONY : vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/clean

vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/depend:
	cd /home/nouran/OpenFPGA/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nouran/OpenFPGA /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp /home/nouran/OpenFPGA/build /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vtr-verilog-to-routing/libs/EXTERNAL/capnproto/c++/src/capnp/CMakeFiles/capnp_tool.dir/depend

