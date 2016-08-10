cmake_minimum_required(VERSION 3.5)

find_package(CxxTest)


set(A_SRC a/matherrors.cpp)
set(B_SRC
        b/must_follow_a.cpp
        b/must_follow_a.h
        b/test_must_follow_a.cpp
        )

add_executable(matherrors ${A_SRC})

if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()
    CXXTEST_ADD_TEST(test_must_follow runner.cpp
            ${B_SRC})
endif()