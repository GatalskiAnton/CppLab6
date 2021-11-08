cmake_minimum_required(VERSION 3.20)
project(untitled6)

set(CMAKE_CXX_STANDARD 14)

add_executable(main.cpp test.cpp class.h class.cpp)


# 'Google_test' is the subproject name
project(Google_tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Google_Tests_run test.cpp class.h class.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)
