cmake_minimum_required(VERSION 3.5)
include_directories(include)

add_executable(inttest intest.cpp)

add_executable(test2 Test2.cpp)

add_executable(itera itera.cpp)

add_executable(insdel insdel.cpp)
add_executable(print_pairs print_pairs.cpp)
add_executable(hello1 hello.cpp main.cpp)
add_executable(bad_plumming bad_plumming.cpp)
add_executable(weired weired.cpp)