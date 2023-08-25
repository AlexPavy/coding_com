cmake_minimum_required(VERSION 3.25)
project(text_justification)

set(CMAKE_CXX_STANDARD 20)

include_directories(coding_com/leet_code/text_justification)

add_executable(text_justification
        tj_main.h
        tj_main.cpp)
