cmake_minimum_required(VERSION 3.12)
project(garden)

set(CMAKE_CXX_STANDARD 14)

add_executable(garden main.cpp garden.cpp garden.h plants.cpp plants.h trees.cpp trees.h flowers.cpp flowers.h)