cmake_minimum_required(VERSION 3.12)
project(dojo)

set(CMAKE_CXX_STANDARD 14)

add_executable(dojo_run main.cpp)

include_directories(poker)
add_subdirectory(poker)
add_subdirectory(poker_test)

target_link_libraries(dojo_run poker)