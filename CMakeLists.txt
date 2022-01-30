cmake_minimum_required(VERSION 3.17)
project(CPP_07)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)

add_executable(ex00 ex00/main.cpp ex00/whatever.hpp)
add_executable(ex01 ex01/main.cpp ex01/iter.hpp)
add_executable(ex02 ex02/main.cpp ex02/Array.hpp)

