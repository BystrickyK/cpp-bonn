Code is now separated into modules -> Harder to build

Include -> for preprocessor; just copies the contents of the include to the file =>  string processing only

CMake
  Doesn't build the code, just generates files to feed into a build system
  Library creation:
    add_library(tools tools.cpp tools2.cpp ...)
    add_executable(main main.cpp)
    target_link_libraries(main tools)


Typical project structure:

  project_name/
      CMakeLists.txt
      build/
      bin/
          tools_demo
      lib/
          libtools.a
      src/
          CMakeLists.txt
          project_name/
              tools.h
              tools.cpp
              tools_demo.cpp
      tests/
          test_tools.cpp
          CMakeLists.txt
      readme.md


Build process:
  CMakeLists.txt defines the whole build
  CMake reads ^ sequentially

  cd <proj_folder>
  mkdir build
  cd build
  cmake ..
  make -j2  # number of cores == 2

After changing a file, do:
  cd project/build
  make -j2

Clean build (rebuild everything?)
  cd project/build
  make clean
  rm -r *

Use precompiled library
for example, libtools.so
  add_library(tools SHARED IMPORTED)
  set_property(TARGET tools
              PROPERTY IMPORTED_LOCATION
              "${LIBRARY_OUTPUT_PATH}/libtools.so")


CMake commands:
set var
  set(VAR VALUE)
get value of var
  ${VAR}
show message
  message(STATUS "message")
warnings
  WARNING, FATAL_ERROR
Compilation flags
  set (CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_FLAGS "-Wall -Wextra")
  set(CMAKE_CXX_FLAGS DEBUG "-g -O0")
  set(CMAKE_CXX_FLAGS RELEASE "-O3)
