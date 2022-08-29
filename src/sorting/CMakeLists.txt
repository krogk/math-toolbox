# CMake version required
cmake_minimum_required(VERSION 3.16)

# Include the directories
include_directories(bubble-sort)
include_directories(insertion-sort)
include_directories(selection-sort)

# Add unit test
add_subdirectory(ut)
