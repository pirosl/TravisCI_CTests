cmake_minimum_required(VERSION 3.13)
project (sqrt)
add_executable(sqrt sqrt.cpp)

include (CTest)

add_test(sqrtTestRun sqrt 25)
add_test(sqrtTestComp sqrt 25)
set_tests_properties(sqrtTestComp PROPERTIES PASS_REGULAR_EXPRESSION "25 is 5")
