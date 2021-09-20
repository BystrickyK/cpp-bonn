# Add gtest sources folder 
add_subdirectory(
        /usr/src/gtest  # Path to the GTest source folder
        ${PROJECT_BINARY_DIR}/gtest)

include(CTest)  # Include testing cmake package

# Binary name for convenience
set(TEST_BINARY tools_test)

add_executable(${TEST_BINARY} test_tools.cpp)

target_link_libraries(${TEST_BINARY}
        tools   # library we're testing
        gtest gtest_main)       # GTest libraries

add_test(
        NAME ${TEST_BINARY}
        COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_BINARY})

