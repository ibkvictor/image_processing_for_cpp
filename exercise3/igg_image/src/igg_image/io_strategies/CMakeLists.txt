add_library(strategies SHARED
            ${PNG_LIBRARIES}
	    ppm_strategy.cpp
	    png_strategy.cpp
            dummy_strategy.cpp)
# TODO: link strategies against needed libraries.
find_package(PNG REQUIRED)

include_directories(${PNG_INCLUDE_DIRS})

target_link_libraries(strategies ${PNG_LIBRARIES})
