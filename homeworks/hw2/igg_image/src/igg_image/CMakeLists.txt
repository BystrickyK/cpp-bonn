#################### Import the 'io_tools' library here ########################
message(STATUS "Making image library.\n Project source path: ${PROJECT_SOURCE_DIR}") 

# Parameters -> Path variable name, what to look for, where to look for it
find_library(io_tools_LIBRARIES NAMES libio_tools.so PATHS ${PROJECT_SOURCE_DIR}/lib)
message(STATUS "io_tools LIBRARIES: ${io_tools_LIBRARIES}") 
#add_library(io_tools SHARED ${io_tools_LIBRARIES})
#set_target_properties(io_tools PROPERTIES LINKER_LANGUAGE CXX)

#################### Create a library 'image' below this line ##################
add_library(image image.cpp)

add_executable(main main.cpp)
target_link_libraries(main image ${io_tools_LIBRARIES})
