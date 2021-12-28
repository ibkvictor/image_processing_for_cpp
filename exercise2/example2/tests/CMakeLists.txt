#adding the directory which contains CTest, cmake.cc and cmake_main.cc
add_subdirectory(/Users/user/Downloads/googletest/googletest
			${PROJECT_BINARY_DIR}/gtest) 
#second argument represent where the built files ( i.e object and binary files of the included subdirectory ) should be place. in this case PROJEC T_BINARY_DIR which means "build" folder

#not used but simplifies code
set(gtest_source_dir ./usr/local/include/googletest)

#cmake works using the CTest module
include(CTest)
