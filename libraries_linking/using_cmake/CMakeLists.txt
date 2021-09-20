project(project_name)
cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# Where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Create library tools
add_library(tools tools.cpp)

# Create executable main
add_executable(main main.cpp)

# Link them and build
target_link_libraries(main tools)
