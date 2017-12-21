cmake_minimum_required(VERSION 3.9)
project(data_structure C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_COMPILER /usr/bin/g++)

add_executable(data_structure main.c MinSubsequenceSum.h autotesttools.h PureCircle.h)