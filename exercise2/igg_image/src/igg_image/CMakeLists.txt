#################### Import the 'io_tools' library here ########################
find_library(io_tools 
		NAMES	io_tools
		PATHS	/Users/user/Documents/image_processing_cpp_exercies/exercise2/igg_image/lib
		)
message(STATUS !!!${io_tools})

#################### Create a library 'image' below this line ##################
add_library(image image.cpp)

add_executable(bin_main main.cpp)

message(STATUS !!!Executatble is built${bin_main})

target_link_libraries(bin_main image ${io_tools})

