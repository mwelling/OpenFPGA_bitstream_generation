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
include libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/progress.make

# Include the compile flags for this target's objects.
include libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/flags.make

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.o: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/flags.make
libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.o: ../libs/libfpgabitstream/src/bitstream_manager.cpp
libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.o: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.o"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.o -MF CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.o.d -o CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.o -c /home/nouran/OpenFPGA/libs/libfpgabitstream/src/bitstream_manager.cpp

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.i"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/libs/libfpgabitstream/src/bitstream_manager.cpp > CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.i

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.s"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/libs/libfpgabitstream/src/bitstream_manager.cpp -o CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.s

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.o: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/flags.make
libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.o: ../libs/libfpgabitstream/src/bitstream_manager_utils.cpp
libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.o: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.o"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.o -MF CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.o.d -o CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.o -c /home/nouran/OpenFPGA/libs/libfpgabitstream/src/bitstream_manager_utils.cpp

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.i"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/libs/libfpgabitstream/src/bitstream_manager_utils.cpp > CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.i

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.s"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/libs/libfpgabitstream/src/bitstream_manager_utils.cpp -o CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.s

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.o: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/flags.make
libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.o: ../libs/libfpgabitstream/src/read_xml_arch_bitstream.cpp
libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.o: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.o"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.o -MF CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.o.d -o CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.o -c /home/nouran/OpenFPGA/libs/libfpgabitstream/src/read_xml_arch_bitstream.cpp

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.i"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/libs/libfpgabitstream/src/read_xml_arch_bitstream.cpp > CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.i

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.s"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/libs/libfpgabitstream/src/read_xml_arch_bitstream.cpp -o CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.s

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.o: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/flags.make
libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.o: ../libs/libfpgabitstream/src/report_arch_bitstream_distribution.cpp
libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.o: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.o"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.o -MF CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.o.d -o CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.o -c /home/nouran/OpenFPGA/libs/libfpgabitstream/src/report_arch_bitstream_distribution.cpp

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.i"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/libs/libfpgabitstream/src/report_arch_bitstream_distribution.cpp > CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.i

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.s"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/libs/libfpgabitstream/src/report_arch_bitstream_distribution.cpp -o CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.s

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.o: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/flags.make
libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.o: ../libs/libfpgabitstream/src/write_xml_arch_bitstream.cpp
libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.o: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.o"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.o -MF CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.o.d -o CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.o -c /home/nouran/OpenFPGA/libs/libfpgabitstream/src/write_xml_arch_bitstream.cpp

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.i"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nouran/OpenFPGA/libs/libfpgabitstream/src/write_xml_arch_bitstream.cpp > CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.i

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.s"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nouran/OpenFPGA/libs/libfpgabitstream/src/write_xml_arch_bitstream.cpp -o CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.s

# Object files for target libfpgabitstream
libfpgabitstream_OBJECTS = \
"CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.o" \
"CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.o" \
"CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.o" \
"CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.o" \
"CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.o"

# External object files for target libfpgabitstream
libfpgabitstream_EXTERNAL_OBJECTS =

libs/libfpgabitstream/libfpgabitstream.a: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager.cpp.o
libs/libfpgabitstream/libfpgabitstream.a: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/bitstream_manager_utils.cpp.o
libs/libfpgabitstream/libfpgabitstream.a: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/read_xml_arch_bitstream.cpp.o
libs/libfpgabitstream/libfpgabitstream.a: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/report_arch_bitstream_distribution.cpp.o
libs/libfpgabitstream/libfpgabitstream.a: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/src/write_xml_arch_bitstream.cpp.o
libs/libfpgabitstream/libfpgabitstream.a: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/build.make
libs/libfpgabitstream/libfpgabitstream.a: libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nouran/OpenFPGA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libfpgabitstream.a"
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && $(CMAKE_COMMAND) -P CMakeFiles/libfpgabitstream.dir/cmake_clean_target.cmake
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libfpgabitstream.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/build: libs/libfpgabitstream/libfpgabitstream.a
.PHONY : libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/build

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/clean:
	cd /home/nouran/OpenFPGA/build/libs/libfpgabitstream && $(CMAKE_COMMAND) -P CMakeFiles/libfpgabitstream.dir/cmake_clean.cmake
.PHONY : libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/clean

libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/depend:
	cd /home/nouran/OpenFPGA/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nouran/OpenFPGA /home/nouran/OpenFPGA/libs/libfpgabitstream /home/nouran/OpenFPGA/build /home/nouran/OpenFPGA/build/libs/libfpgabitstream /home/nouran/OpenFPGA/build/libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/libfpgabitstream/CMakeFiles/libfpgabitstream.dir/depend
