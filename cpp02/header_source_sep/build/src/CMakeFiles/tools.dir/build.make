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

# Include any dependencies generated for this target.
include src/CMakeFiles/tools.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/tools.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/tools.dir/flags.make

src/CMakeFiles/tools.dir/tools.cpp.o: src/CMakeFiles/tools.dir/flags.make
src/CMakeFiles/tools.dir/tools.cpp.o: ../src/tools.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/christop/cpp/cpp02/header_source_sep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/tools.dir/tools.cpp.o"
	cd /home/christop/cpp/cpp02/header_source_sep/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tools.dir/tools.cpp.o -c /home/christop/cpp/cpp02/header_source_sep/src/tools.cpp

src/CMakeFiles/tools.dir/tools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tools.dir/tools.cpp.i"
	cd /home/christop/cpp/cpp02/header_source_sep/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/christop/cpp/cpp02/header_source_sep/src/tools.cpp > CMakeFiles/tools.dir/tools.cpp.i

src/CMakeFiles/tools.dir/tools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tools.dir/tools.cpp.s"
	cd /home/christop/cpp/cpp02/header_source_sep/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/christop/cpp/cpp02/header_source_sep/src/tools.cpp -o CMakeFiles/tools.dir/tools.cpp.s

# Object files for target tools
tools_OBJECTS = \
"CMakeFiles/tools.dir/tools.cpp.o"

# External object files for target tools
tools_EXTERNAL_OBJECTS =

src/libtools.a: src/CMakeFiles/tools.dir/tools.cpp.o
src/libtools.a: src/CMakeFiles/tools.dir/build.make
src/libtools.a: src/CMakeFiles/tools.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/christop/cpp/cpp02/header_source_sep/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libtools.a"
	cd /home/christop/cpp/cpp02/header_source_sep/build/src && $(CMAKE_COMMAND) -P CMakeFiles/tools.dir/cmake_clean_target.cmake
	cd /home/christop/cpp/cpp02/header_source_sep/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tools.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/tools.dir/build: src/libtools.a

.PHONY : src/CMakeFiles/tools.dir/build

src/CMakeFiles/tools.dir/clean:
	cd /home/christop/cpp/cpp02/header_source_sep/build/src && $(CMAKE_COMMAND) -P CMakeFiles/tools.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/tools.dir/clean

src/CMakeFiles/tools.dir/depend:
	cd /home/christop/cpp/cpp02/header_source_sep/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/christop/cpp/cpp02/header_source_sep /home/christop/cpp/cpp02/header_source_sep/src /home/christop/cpp/cpp02/header_source_sep/build /home/christop/cpp/cpp02/header_source_sep/build/src /home/christop/cpp/cpp02/header_source_sep/build/src/CMakeFiles/tools.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/tools.dir/depend

