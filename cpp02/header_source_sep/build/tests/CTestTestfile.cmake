# CMake generated Testfile for 
# Source directory: /home/christop/cpp/cpp02/header_source_sep/tests
# Build directory: /home/christop/cpp/cpp02/header_source_sep/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tools_test "/tools_test")
set_tests_properties(tools_test PROPERTIES  _BACKTRACE_TRIPLES "/home/christop/cpp/cpp02/header_source_sep/tests/CMakeLists.txt;17;add_test;/home/christop/cpp/cpp02/header_source_sep/tests/CMakeLists.txt;0;")
subdirs("../gtest")
