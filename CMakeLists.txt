cmake_minimum_required(VERSION 3.14)
project(build_sys)


# shape directory contains a static 
# library named shape_lib
add_subdirectory(shape)

add_subdirectory(framework)

# sample_proj directory contains the executable
add_subdirectory(sample_proj)


