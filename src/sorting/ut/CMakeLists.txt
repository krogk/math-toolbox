cmake_minimum_required(VERSION 3.16)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Add unit test executable
add_executable(ut-sorting sorting-functional.cpp)
# Link ut with required libraries
target_link_libraries(ut-sorting ${GTEST_LIBRARIES})