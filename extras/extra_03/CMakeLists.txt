cmake_minimum_required(VERSION 3.24.2)
project(extra_03 C)

set(CMAKE_C_STANDARD 23)

add_executable(extra_03 main.c cmake-build-debug/function.c cmake-build-debug/function.h ../extra_04/main.c ../extra_04/function.c ../extra_04/function.h)
