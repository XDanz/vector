cmake_minimum_required(VERSION 3.5)
project(vector)
set(PROJECT_NAME_STR vector)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    extra/dtc-matrix/example_test.h
    extra/dtc-matrix/intest.cpp
    extra/dtc-matrix/matrix.cpp
    extra/dtc-matrix/Matrix.h
    extra/include/Matrix.h
    extra/example_test.h
    extra/matrix.cpp
    extra/Matrix.h
    extra/testcode.cpp
    lab-files/A.cpp
    lab-files/Data.cpp
    lab-files/example_test.h
    lab-files/KTH-eduroam-configurator-MacOS10.6-1.0.cpp
    lab-files/matherrors.cpp
    lab-files/Matrix.h
    lab-files/must_follow_a.cpp
    lab-files/must_follow_a.h
    lab-files/README
    lab-files/README.lab1
    lab-files/test_must_follow_a.cpp
    lab-files/test_template_vec.cpp
    lab-files/test_vec.cpp
    lab1_1.5/vector.h
    lab1_1.5/vector_run0.cpp)

add_executable(vector ${SOURCE_FILES})

add_subdirectory(lab1_1.1)
add_subdirectory(lab1_1.2)
add_subdirectory(lab1_1.3)
add_subdirectory(lab1_1.4)
