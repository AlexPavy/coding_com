cmake_minimum_required(VERSION 3.25)
project(text_justification)

set(CMAKE_CXX_STANDARD 20)

include_directories(coding_com/leet_code/text_justification)

add_executable(text_justification
        tj_main.h
        tj_main.cpp)

Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.2.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(tests
        test_tj.cpp test_tj.h
        tj_main.cpp tj_main.h)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
