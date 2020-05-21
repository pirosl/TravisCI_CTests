cmake_minimum_required(VERSION 3.0)
project (sqrt)

# Locate GTest
find_package(GTest REQUIRED)

add_executable(sqrt src/sqrt.cpp src/squareRoot.cpp)

add_executable(sqrt_test test/sqrt_test.cpp)
target_include_directories(sqrt_test PRIVATE ${GTEST_INCLUDE_DIRS})
target_include_directories(sqrt_test PRIVATE src)

add_executable(dailycodingproblem1_test test/dailycodingproblem1_test.cpp)
target_include_directories(dailycodingproblem1_test PRIVATE ${GTEST_INCLUDE_DIRS})
target_include_directories(dailycodingproblem1_test PRIVATE src)

target_link_libraries(sqrt_test ${GTEST_LIBRARIES} pthread)
target_link_libraries(dailycodingproblem1_test ${GTEST_LIBRARIES} pthread)

add_custom_target(test
	COMMAND echo "------------sqrt_test----------------------"
    COMMAND ./sqrt_test
    COMMAND echo "------------dailycodingproblem1----------------------"
    COMMAND ./dailycodingproblem1_test
    
    COMMENT "Run tests"
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

add_dependencies(test sqrt_test)
add_dependencies(test dailycodingproblem1_test)
