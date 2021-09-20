project(cmake_test_project)
cmake_minimum_required(VERSION 3.0)

enable_testing()
add_subdirectory(tests)

#where to look for headers
include_directories(${PROJECT_SOURCE_DIR}/src)  # for headers with <> brackets instead of ""

add_subdirectory(${PROJECT_SOURCE_DIR}/src)
# or add_subdirectory(src), ^ is explicit


