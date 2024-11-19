cmake_minimum_required(VERSION 3.10)

# Project Name
project(GitHubActionsSample)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Add Executable for Tests
add_executable(main main.cpp)
add_executable(test test.cpp)
