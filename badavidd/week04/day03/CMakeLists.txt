cmake_minimum_required(VERSION 3.12)
project(day03)

set(CMAKE_CXX_STANDARD 14)

add_executable(day03 main.cpp instrument.cpp instrument.h stringedinstument.cpp stringedinstument.h electricguitar.cpp electricguitar.h bassguitar.cpp bassguitar.h violin.cpp violin.h)