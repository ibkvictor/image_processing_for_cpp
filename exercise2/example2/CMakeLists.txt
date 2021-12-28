#set up cmake project
project(example2)

#set up minimum require cmake version
cmake_minimum_required(VERSION 3.0)

#practice output in cmake
message(${PROJECT_SOURCE_DIR})

#essential to enable c++ find in header files (please always do this)
include_directories(${PROJECT_SOURCE_DIR}/src)

#add src sub directory
add_subdirectory(src)

#hint the cmake to include generate code and include compiler settings for testing
enable_testing()

#add the testing sub directory
add_subdirectory(tests)
