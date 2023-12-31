cmake_minimum_required(VERSION 3.26)
project(alpaca_cl)

set(CMAKE_CXX_STANDARD 20)

include_directories(coding_com/alpaca_cl)

Include(FetchContent)

FetchContent_Declare(
        alpaca
        GIT_REPOSITORY https://github.com/marpaia/alpaca-trade-api-cpp.git
        GIT_TAG v0.0.3
)

FetchContent_MakeAvailable(alpaca)

add_executable(alpaca_cl
        alp_start.h alp_start.cpp
        alp_main.h alp_main.cpp
)
target_link_libraries(alpaca_cl PRIVATE alpaca::Client)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.3.2
)

FetchContent_MakeAvailable(Catch2)

add_executable(tests
        alp_test.cpp alp_test.h
        alp_main.cpp alp_main.h)
target_link_libraries(tests PRIVATE alpaca::Client)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
