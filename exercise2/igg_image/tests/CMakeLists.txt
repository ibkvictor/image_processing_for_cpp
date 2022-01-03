# If you are not on Linux, you will need to download the source of the
# googletest framework manually and provide the folder to which you have
# - downloaded it by copying this link into your browser:
#   https://github.com/google/googletest/archive/release-1.8.0.zip
# - unpack it into some <FOLDER>
# - use this <FOLDER> instead of /usr/src/gtest in the line below.
add_subdirectory("/Users/user/Documents/image_processing_cpp_exercies/googletest-release-1.8.0/googletest"
                 ${PROJECT_BINARY_DIR}/gtest)
include(CTest) # Include testing cmake package.
set(TEST_BINARY ${PROJECT_NAME}_test) #best practice, but can be ignored.

##################### Create your tests below this line ########################
add_executable(${TEST_BINARY} tests_image.cpp)

target_link_libraries(${TEST_BINARY}
			image
			${io_tools}
			gtest
			gtest_main)

add_test(NAME ${TEST_BINARY}
	COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_BINARY})
