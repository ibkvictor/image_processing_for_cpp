# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.18.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.18.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/color_image_test.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/color_image_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/color_image_test.dir/flags.make

tests/CMakeFiles/color_image_test.dir/test_init.cpp.o: tests/CMakeFiles/color_image_test.dir/flags.make
tests/CMakeFiles/color_image_test.dir/test_init.cpp.o: ../tests/test_init.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/color_image_test.dir/test_init.cpp.o"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/color_image_test.dir/test_init.cpp.o -c /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_init.cpp

tests/CMakeFiles/color_image_test.dir/test_init.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/color_image_test.dir/test_init.cpp.i"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_init.cpp > CMakeFiles/color_image_test.dir/test_init.cpp.i

tests/CMakeFiles/color_image_test.dir/test_init.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/color_image_test.dir/test_init.cpp.s"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_init.cpp -o CMakeFiles/color_image_test.dir/test_init.cpp.s

tests/CMakeFiles/color_image_test.dir/test_resize.cpp.o: tests/CMakeFiles/color_image_test.dir/flags.make
tests/CMakeFiles/color_image_test.dir/test_resize.cpp.o: ../tests/test_resize.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/color_image_test.dir/test_resize.cpp.o"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/color_image_test.dir/test_resize.cpp.o -c /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_resize.cpp

tests/CMakeFiles/color_image_test.dir/test_resize.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/color_image_test.dir/test_resize.cpp.i"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_resize.cpp > CMakeFiles/color_image_test.dir/test_resize.cpp.i

tests/CMakeFiles/color_image_test.dir/test_resize.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/color_image_test.dir/test_resize.cpp.s"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_resize.cpp -o CMakeFiles/color_image_test.dir/test_resize.cpp.s

tests/CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.o: tests/CMakeFiles/color_image_test.dir/flags.make
tests/CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.o: ../tests/test_dummy_strategy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tests/CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.o"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.o -c /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_dummy_strategy.cpp

tests/CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.i"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_dummy_strategy.cpp > CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.i

tests/CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.s"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_dummy_strategy.cpp -o CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.s

tests/CMakeFiles/color_image_test.dir/test_histogram.cpp.o: tests/CMakeFiles/color_image_test.dir/flags.make
tests/CMakeFiles/color_image_test.dir/test_histogram.cpp.o: ../tests/test_histogram.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tests/CMakeFiles/color_image_test.dir/test_histogram.cpp.o"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/color_image_test.dir/test_histogram.cpp.o -c /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_histogram.cpp

tests/CMakeFiles/color_image_test.dir/test_histogram.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/color_image_test.dir/test_histogram.cpp.i"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_histogram.cpp > CMakeFiles/color_image_test.dir/test_histogram.cpp.i

tests/CMakeFiles/color_image_test.dir/test_histogram.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/color_image_test.dir/test_histogram.cpp.s"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_histogram.cpp -o CMakeFiles/color_image_test.dir/test_histogram.cpp.s

tests/CMakeFiles/color_image_test.dir/test_from_ppm.cpp.o: tests/CMakeFiles/color_image_test.dir/flags.make
tests/CMakeFiles/color_image_test.dir/test_from_ppm.cpp.o: ../tests/test_from_ppm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tests/CMakeFiles/color_image_test.dir/test_from_ppm.cpp.o"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/color_image_test.dir/test_from_ppm.cpp.o -c /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_from_ppm.cpp

tests/CMakeFiles/color_image_test.dir/test_from_ppm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/color_image_test.dir/test_from_ppm.cpp.i"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_from_ppm.cpp > CMakeFiles/color_image_test.dir/test_from_ppm.cpp.i

tests/CMakeFiles/color_image_test.dir/test_from_ppm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/color_image_test.dir/test_from_ppm.cpp.s"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_from_ppm.cpp -o CMakeFiles/color_image_test.dir/test_from_ppm.cpp.s

tests/CMakeFiles/color_image_test.dir/test_from_png.cpp.o: tests/CMakeFiles/color_image_test.dir/flags.make
tests/CMakeFiles/color_image_test.dir/test_from_png.cpp.o: ../tests/test_from_png.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object tests/CMakeFiles/color_image_test.dir/test_from_png.cpp.o"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/color_image_test.dir/test_from_png.cpp.o -c /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_from_png.cpp

tests/CMakeFiles/color_image_test.dir/test_from_png.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/color_image_test.dir/test_from_png.cpp.i"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_from_png.cpp > CMakeFiles/color_image_test.dir/test_from_png.cpp.i

tests/CMakeFiles/color_image_test.dir/test_from_png.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/color_image_test.dir/test_from_png.cpp.s"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests/test_from_png.cpp -o CMakeFiles/color_image_test.dir/test_from_png.cpp.s

# Object files for target color_image_test
color_image_test_OBJECTS = \
"CMakeFiles/color_image_test.dir/test_init.cpp.o" \
"CMakeFiles/color_image_test.dir/test_resize.cpp.o" \
"CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.o" \
"CMakeFiles/color_image_test.dir/test_histogram.cpp.o" \
"CMakeFiles/color_image_test.dir/test_from_ppm.cpp.o" \
"CMakeFiles/color_image_test.dir/test_from_png.cpp.o"

# External object files for target color_image_test
color_image_test_EXTERNAL_OBJECTS =

../bin/color_image_test: tests/CMakeFiles/color_image_test.dir/test_init.cpp.o
../bin/color_image_test: tests/CMakeFiles/color_image_test.dir/test_resize.cpp.o
../bin/color_image_test: tests/CMakeFiles/color_image_test.dir/test_dummy_strategy.cpp.o
../bin/color_image_test: tests/CMakeFiles/color_image_test.dir/test_histogram.cpp.o
../bin/color_image_test: tests/CMakeFiles/color_image_test.dir/test_from_ppm.cpp.o
../bin/color_image_test: tests/CMakeFiles/color_image_test.dir/test_from_png.cpp.o
../bin/color_image_test: tests/CMakeFiles/color_image_test.dir/build.make
../bin/color_image_test: ../lib/libimage.a
../bin/color_image_test: ../lib/libstrategies.dylib
../bin/color_image_test: ../lib/libgtest.a
../bin/color_image_test: ../lib/libgtest_main.a
../bin/color_image_test: /usr/local/lib/libpng.dylib
../bin/color_image_test: /Library/Developer/CommandLineTools/SDKs/MacOSX11.3.sdk/usr/lib/libz.tbd
../bin/color_image_test: ../lib/libgtest.a
../bin/color_image_test: tests/CMakeFiles/color_image_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable ../../bin/color_image_test"
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/color_image_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/color_image_test.dir/build: ../bin/color_image_test

.PHONY : tests/CMakeFiles/color_image_test.dir/build

tests/CMakeFiles/color_image_test.dir/clean:
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/color_image_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/color_image_test.dir/clean

tests/CMakeFiles/color_image_test.dir/depend:
	cd /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/tests /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests /Users/user/Documents/image_processing_cpp_exercies/exercise3/igg_image/build/tests/CMakeFiles/color_image_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/color_image_test.dir/depend

