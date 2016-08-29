cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(VECTOR_RUN
        vector_run15.cpp
        include/vector.h)

include_directories(include)

add_executable(vector_run15 ${VECTOR_RUN})
