cmake_minimum_required(VERSION 3.12)
project(devices)

set(CMAKE_CXX_STANDARD 14)

add_executable(devices main.cpp scanner.cpp scanner.h printer.cpp printer.h printer2d.cpp printer2d.h)