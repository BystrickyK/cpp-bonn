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
CMAKE_SOURCE_DIR = /home/christop/cpp/cpp02/header_source_sep

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/christop/cpp/cpp02/header_source_sep/build

# Utility rule file for NightlyMemoryCheck.

# Include the progress variables for this target.
include tests/CMakeFiles/NightlyMemoryCheck.dir/progress.make

tests/CMakeFiles/NightlyMemoryCheck:
	cd /home/christop/cpp/cpp02/header_source_sep/build/tests && /usr/bin/ctest -D NightlyMemoryCheck

NightlyMemoryCheck: tests/CMakeFiles/NightlyMemoryCheck
NightlyMemoryCheck: tests/CMakeFiles/NightlyMemoryCheck.dir/build.make

.PHONY : NightlyMemoryCheck

# Rule to build all files generated by this target.
tests/CMakeFiles/NightlyMemoryCheck.dir/build: NightlyMemoryCheck

.PHONY : tests/CMakeFiles/NightlyMemoryCheck.dir/build

tests/CMakeFiles/NightlyMemoryCheck.dir/clean:
	cd /home/christop/cpp/cpp02/header_source_sep/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/NightlyMemoryCheck.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/NightlyMemoryCheck.dir/clean

tests/CMakeFiles/NightlyMemoryCheck.dir/depend:
	cd /home/christop/cpp/cpp02/header_source_sep/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/christop/cpp/cpp02/header_source_sep /home/christop/cpp/cpp02/header_source_sep/tests /home/christop/cpp/cpp02/header_source_sep/build /home/christop/cpp/cpp02/header_source_sep/build/tests /home/christop/cpp/cpp02/header_source_sep/build/tests/CMakeFiles/NightlyMemoryCheck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/NightlyMemoryCheck.dir/depend

