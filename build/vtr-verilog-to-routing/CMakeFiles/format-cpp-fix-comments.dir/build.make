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

# Utility rule file for format-cpp-fix-comments.

# Include any custom commands dependencies for this target.
include vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments.dir/compiler_depend.make

# Include the progress variables for this target.
include vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments.dir/progress.make

vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments:
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing && find /home/nouran/OpenFPGA/vtr-verilog-to-routing/vpr /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libarchfpga /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvtrutil /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libpugiutil /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/liblog /home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/librtlnumber /home/nouran/OpenFPGA/vtr-verilog-to-routing/ODIN_II -name '*.cpp' -print -o -name '*.h' -print -o -name '*.tpp' -print -o -name '*.hpp' -print | xargs -L 1 -P 20 python3 /home/nouran/OpenFPGA/vtr-verilog-to-routing/dev/code_format_fixup.py --inplace --fix-comments --input

format-cpp-fix-comments: vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments
format-cpp-fix-comments: vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments.dir/build.make
.PHONY : format-cpp-fix-comments

# Rule to build all files generated by this target.
vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments.dir/build: format-cpp-fix-comments
.PHONY : vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments.dir/build

vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments.dir/clean:
	cd /home/nouran/OpenFPGA/build/vtr-verilog-to-routing && $(CMAKE_COMMAND) -P CMakeFiles/format-cpp-fix-comments.dir/cmake_clean.cmake
.PHONY : vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments.dir/clean

vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments.dir/depend:
	cd /home/nouran/OpenFPGA/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nouran/OpenFPGA /home/nouran/OpenFPGA/vtr-verilog-to-routing /home/nouran/OpenFPGA/build /home/nouran/OpenFPGA/build/vtr-verilog-to-routing /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vtr-verilog-to-routing/CMakeFiles/format-cpp-fix-comments.dir/depend

