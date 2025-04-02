cmake_minimum_required(VERSION 3.29)
project(lab_06 C)

set(CMAKE_C_STANDARD 23)

add_executable(lab_06 main.c
        cmake-build-debug/simple_queue.c
        cmake-build-debug/simple_queue.h
        cmake-build-debug/constants.h)
