cmake_minimum_required(VERSION 3.0.0)
project(Rectangle VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 14)

# Create the executable Rectangle
add_executable(Rectangle
        main.cpp
        src/Rectangle.cpp
        include/Rectangle.h)

# Include path to header files
target_include_directories(Rectangle PRIVATE ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(test)