# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/christop/cpp/homeworks/hw2/igg_image

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/christop/cpp/homeworks/hw2/igg_image/build

# Utility rule file for ContinuousCoverage.

# Include the progress variables for this target.
include tests/CMakeFiles/ContinuousCoverage.dir/progress.make

tests/CMakeFiles/ContinuousCoverage:
	cd /home/christop/cpp/homeworks/hw2/igg_image/build/tests && /usr/bin/ctest -D ContinuousCoverage

ContinuousCoverage: tests/CMakeFiles/ContinuousCoverage
ContinuousCoverage: tests/CMakeFiles/ContinuousCoverage.dir/build.make

.PHONY : ContinuousCoverage

# Rule to build all files generated by this target.
tests/CMakeFiles/ContinuousCoverage.dir/build: ContinuousCoverage

.PHONY : tests/CMakeFiles/ContinuousCoverage.dir/build

tests/CMakeFiles/ContinuousCoverage.dir/clean:
	cd /home/christop/cpp/homeworks/hw2/igg_image/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/ContinuousCoverage.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/ContinuousCoverage.dir/clean

tests/CMakeFiles/ContinuousCoverage.dir/depend:
	cd /home/christop/cpp/homeworks/hw2/igg_image/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/christop/cpp/homeworks/hw2/igg_image /home/christop/cpp/homeworks/hw2/igg_image/tests /home/christop/cpp/homeworks/hw2/igg_image/build /home/christop/cpp/homeworks/hw2/igg_image/build/tests /home/christop/cpp/homeworks/hw2/igg_image/build/tests/CMakeFiles/ContinuousCoverage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/ContinuousCoverage.dir/depend

