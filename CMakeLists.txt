project(main_exec)
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)

# Add the shared library target
add_library(predictor SHARED Predictor.cpp)

# Specify the include directories for the shared library
target_include_directories(predictor PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Ensure the 'predictor/bin' directory exists
file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Set the output directory for the shared library
set_target_properties(predictor PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
)

# Print the output directory to confirm where the .so file will go
message(STATUS "Library output directory: ${CMAKE_CURRENT_SOURCE_DIR}/bin")