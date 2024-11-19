cmake_minimum_required(VERSION 3.10)

# Project Name
project(CPPActionTester)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Enable testing
enable_testing()

# Add executables
add_executable(main main.cpp)
add_executable(test test.cpp)

# Link Google Test
find_package(GTest REQUIRED)
target_link_libraries(test GTest::GTest GTest::Main)

# Add test target
add_test(NAME AllTests COMMAND test)
