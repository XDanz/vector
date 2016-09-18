cmake_minimum_required(VERSION 3.5)
project(vector)
set(PROJECT_NAME_STR vector)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#-------------------
# set common include folder for module
#-------------------
set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
set(EXT_PROJECTS_DIR ${PROJECT_SOURCE_DIR}/ext)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_subdirectory(${EXT_PROJECTS_DIR}/gtest)

add_subdirectory(lab1_1.1)
add_subdirectory(lab1_1.2)
add_subdirectory(lab1_1.3)
add_subdirectory(lab1_1.4)
add_subdirectory(lab1_1.5)
add_subdirectory(extra)
add_subdirectory(tests)
