cmake_minimum_required(VERSION 3.5)
include_directories(include)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(inttest intest.cpp hello.cpp hello.h main_hello.cpp main_hello.h)

add_executable(test2 Test2.cpp)

add_executable(itera itera.cpp)

add_executable(insdel insdel.cpp)
add_executable(print_pairs print_pairs.cpp)

add_executable(hello1 hello.cpp main.cpp)

add_executable(bad_plumming bad_plumming.cpp)

add_executable(weired weired.cpp)

add_executable(test3 test3.cpp)

add_executable(hello_world main_hello.cpp hello.cpp hello.h)