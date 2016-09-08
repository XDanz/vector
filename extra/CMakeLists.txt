cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package(CxxTest)

#include_directories(include)
#include_directories(../lab1_1.5/include)
add_subdirectory(cxxtests)

#add_executable(test1 test.cpp)
##add_executable(matrix2)
#
#if(CXXTEST_FOUND)
#    include_directories(${CXXTEST_INCLUDE_DIR})
#    enable_testing()
#    CXXTEST_ADD_TEST(example_test ${SOURCE_FILES})
#endif()