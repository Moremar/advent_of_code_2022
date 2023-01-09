
cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(advent_of_code_2022
        VERSION 1.0
        DESCRIPTION "Advent of Code 2022 puzzles solutions in C++")

add_subdirectory(Common)
add_subdirectory(day01)
add_subdirectory(day02)
add_subdirectory(day03)
add_subdirectory(day10)
