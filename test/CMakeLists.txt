# Setup testing
enable_testing()
# Find the Google Test package on this computer
find_package(GTest REQUIRED)

# Create the executable Rectangle_test
add_executable(Rectangle_test
        rectangle_test.cpp
        ${CMAKE_SOURCE_DIR}/include/Rectangle.h
        ${CMAKE_SOURCE_DIR}/src/Rectangle.cpp)

# Include path to header files
target_include_directories(Rectangle_test PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Link the Google Test library to Rectangle_test
target_link_libraries(Rectangle_test GTest::GTest GTest::Main)