#minium required cmake version
cmake_minimum_required(VERSION 3.0) #correct this line

#name of project
project(test_google)

#include added directory
add_subdirectory(src)

#the source directory contains the header files
include_directories(${PROJECT_SOURCE_DIR}/src)

message(STATUS !!!${PROJECT_SOURCE_DIR})

#enable testing in top most cmakelists file
enable_testing()

#addingi the testing subdirectory
add_subdirectory(test)
