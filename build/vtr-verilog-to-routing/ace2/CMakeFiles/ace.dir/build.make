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
include vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/compiler_depend.make

# Include the progress variables for this target.
include vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/progress.make

# Include the compile flags for this target's objects.
include vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/flags.make

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/ace.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/flags.make
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/ace.c.o: ../vtr-verilog-to-routing/ace2/ace.c
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/ace.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/ace.c.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/ace.c.o -MF CMakeFiles/ace.dir/ace.c.o.d -o CMakeFiles/ace.dir/ace.c.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/ace.c

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/ace.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ace.dir/ace.c.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/ace.c > CMakeFiles/ace.dir/ace.c.i

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/ace.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ace.dir/ace.c.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/ace.c -o CMakeFiles/ace.dir/ace.c.s

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/bdd.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/flags.make
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/bdd.c.o: ../vtr-verilog-to-routing/ace2/bdd.c
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/bdd.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/bdd.c.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/bdd.c.o -MF CMakeFiles/ace.dir/bdd.c.o.d -o CMakeFiles/ace.dir/bdd.c.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/bdd.c

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/bdd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ace.dir/bdd.c.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/bdd.c > CMakeFiles/ace.dir/bdd.c.i

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/bdd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ace.dir/bdd.c.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/bdd.c -o CMakeFiles/ace.dir/bdd.c.s

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/blif.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/flags.make
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/blif.c.o: ../vtr-verilog-to-routing/ace2/blif.c
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/blif.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/blif.c.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/blif.c.o -MF CMakeFiles/ace.dir/blif.c.o.d -o CMakeFiles/ace.dir/blif.c.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/blif.c

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/blif.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ace.dir/blif.c.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/blif.c > CMakeFiles/ace.dir/blif.c.i

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/blif.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ace.dir/blif.c.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/blif.c -o CMakeFiles/ace.dir/blif.c.s

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cube.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/flags.make
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cube.c.o: ../vtr-verilog-to-routing/ace2/cube.c
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cube.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cube.c.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cube.c.o -MF CMakeFiles/ace.dir/cube.c.o.d -o CMakeFiles/ace.dir/cube.c.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/cube.c

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cube.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ace.dir/cube.c.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/cube.c > CMakeFiles/ace.dir/cube.c.i

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cube.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ace.dir/cube.c.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/cube.c -o CMakeFiles/ace.dir/cube.c.s

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cycle.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/flags.make
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cycle.c.o: ../vtr-verilog-to-routing/ace2/cycle.c
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cycle.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cycle.c.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cycle.c.o -MF CMakeFiles/ace.dir/cycle.c.o.d -o CMakeFiles/ace.dir/cycle.c.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/cycle.c

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cycle.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ace.dir/cycle.c.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/cycle.c > CMakeFiles/ace.dir/cycle.c.i

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cycle.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ace.dir/cycle.c.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/cycle.c -o CMakeFiles/ace.dir/cycle.c.s

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/depth.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/flags.make
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/depth.c.o: ../vtr-verilog-to-routing/ace2/depth.c
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/depth.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/depth.c.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/depth.c.o -MF CMakeFiles/ace.dir/depth.c.o.d -o CMakeFiles/ace.dir/depth.c.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/depth.c

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/depth.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ace.dir/depth.c.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/depth.c > CMakeFiles/ace.dir/depth.c.i

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/depth.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ace.dir/depth.c.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/depth.c -o CMakeFiles/ace.dir/depth.c.s

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/io_ace.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/flags.make
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/io_ace.c.o: ../vtr-verilog-to-routing/ace2/io_ace.c
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/io_ace.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/io_ace.c.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/io_ace.c.o -MF CMakeFiles/ace.dir/io_ace.c.o.d -o CMakeFiles/ace.dir/io_ace.c.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/io_ace.c

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/io_ace.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ace.dir/io_ace.c.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/io_ace.c > CMakeFiles/ace.dir/io_ace.c.i

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/io_ace.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ace.dir/io_ace.c.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/io_ace.c -o CMakeFiles/ace.dir/io_ace.c.s

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/sim.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/flags.make
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/sim.c.o: ../vtr-verilog-to-routing/ace2/sim.c
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/sim.c.o: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/sim.c.o"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/sim.c.o -MF CMakeFiles/ace.dir/sim.c.o.d -o CMakeFiles/ace.dir/sim.c.o -c /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/sim.c

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/sim.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ace.dir/sim.c.i"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/sim.c > CMakeFiles/ace.dir/sim.c.i

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/sim.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ace.dir/sim.c.s"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2/sim.c -o CMakeFiles/ace.dir/sim.c.s

# Object files for target ace
ace_OBJECTS = \
"CMakeFiles/ace.dir/ace.c.o" \
"CMakeFiles/ace.dir/bdd.c.o" \
"CMakeFiles/ace.dir/blif.c.o" \
"CMakeFiles/ace.dir/cube.c.o" \
"CMakeFiles/ace.dir/cycle.c.o" \
"CMakeFiles/ace.dir/depth.c.o" \
"CMakeFiles/ace.dir/io_ace.c.o" \
"CMakeFiles/ace.dir/sim.c.o"

# External object files for target ace
ace_EXTERNAL_OBJECTS =

vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/ace.c.o
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/bdd.c.o
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/blif.c.o
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cube.c.o
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/cycle.c.o
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/depth.c.o
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/io_ace.c.o
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/sim.c.o
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/build.make
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/abc/libabc.a
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/libs/libvtrutil/libvtrutil.a
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/libs/liblog/liblog.a
vtr-verilog-to-routing/ace2/ace: vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable ace"
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ace.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/build: vtr-verilog-to-routing/ace2/ace
.PHONY : vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/build

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/clean:
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 && $(CMAKE_COMMAND) -P CMakeFiles/ace.dir/cmake_clean.cmake
.PHONY : vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/clean

vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/depend:
	cd /home/nouran/OpenFPGA/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nouran/OpenFPGA /home/nouran/OpenFPGA/vtr-verilog-to-routing/ace2 /home/nouran/OpenFPGA/build /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2 /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vtr-verilog-to-routing/ace2/CMakeFiles/ace.dir/depend

