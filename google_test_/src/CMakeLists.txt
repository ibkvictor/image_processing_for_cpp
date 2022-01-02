#add library
add_library(libprint print.cpp)

#add executable
add_executable(bin_main main.cpp)

#link target (executable) and libraies
target_link_libraries(bin_main libprint)
