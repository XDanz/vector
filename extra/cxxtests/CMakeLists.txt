cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package(CxxTest)


include_directories(../include)
include_directories(../../lab1_1.5/include)

if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()
    CXXTEST_ADD_TEST(matrix_test runner.cpp example_test.cpp)
    target_link_libraries(matrix_test)
endif()
