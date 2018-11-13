cmake_minimum_required(VERSION 3.12)
project(blogpost)

set(CMAKE_CXX_STANDARD 14)

add_executable(blogpost main.cpp blog_post.cpp blog_post.h)