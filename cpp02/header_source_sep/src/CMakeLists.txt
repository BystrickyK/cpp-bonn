add_executable(bin_main brute_search.cpp)
add_library(tools tools.cpp)

# Connect library and executable
target_link_libraries(bin_main tools)
