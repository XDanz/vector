cmake_minimum_required(VERSION 3.5)

find_package(CxxTest)

include_directories(include)
set(SOURCE_FILES
        cxxtests/example_test.h
        matrix2.cpp
        )


add_executable(test1 cxxtests/test.cpp)
add_executable(matrix2 matrix2.cpp)

if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()
    CXXTEST_ADD_TEST(example_test ${SOURCE_FILES})
endif()