cmake_minimum_required(VERSION 3.0)
project (sqrt)

# Locate GTest
find_package(GTest REQUIRED)

add_executable(sqrt src/sqrt.cpp src/squareRoot.cpp)
add_executable(sqrt_test test/sqrt_test.cpp)

target_include_directories(sqrt_test PRIVATE ${GTEST_INCLUDE_DIRS})
target_include_directories(sqrt_test PRIVATE src)

target_link_libraries(sqrt_test ${GTEST_LIBRARIES} pthread)
