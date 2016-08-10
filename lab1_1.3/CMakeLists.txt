
set(CMAKE_CXX_COMPILER "g++")
set(A_SRC A.cpp)
set(DATA_SRC Data.cpp)

add_executable(a ${A_SRC})
add_executable(data ${DATA_SRC})