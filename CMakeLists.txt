cmake_minimum_required(VERSION 3.24)
project(foo)
set(CMAKE_CXX_STANDARD 20)

add_executable(production main.cpp)
add_executable(testing testing.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)


target_link_libraries(testing
    PUBLIC
        GTest::gtest
        GTest::gmock
        GTest::gtest_main
)

