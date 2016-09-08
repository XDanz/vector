cmake_minimum_required(VERSION 3.5)

find_package(CxxTest)


set(A_SRC matherrors.cpp)

add_executable(matherrors ${A_SRC})