add_subdirectory("/Users/user/Documents/image_processing_cpp_exercies/googletest-release-1.8.0/googletest"
			${PROJECT_BINARY_DIR}/gtest)

include(CTest)

add_executable(bin_testing testing.cpp)

target_link_libraries(bin_testing
			libprint
			gtest
			gtest_main)

add_test(bin_testing
		test/bin_testing)
