#add the library to cmake ...
add_library(lib_sqroot sq_root.cpp)
add_library(lib_blah blah.cpp)

#add executable file
add_executable(bin_main main.cpp)

#link binary and libraries
target_link_libraries(bin_main 
			lib_sqroot
			lib_blah)
