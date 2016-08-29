cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(include)
set(LAB_SRC
            cprog09lab14.cpp
            )

set(VECTOR_TEST
            vector_test.cpp
            )

set(VECTOR_RUN
            vector_run0.cpp
            )

#add_executable(vector_test ${VECTOR_TEST} vector.h)
add_executable(vector_run0 include/vector.h vector_run0.cpp vector.cpp)