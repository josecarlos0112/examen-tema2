cmake_minimum_required(VERSION 3.26)
project(estudiante)

set(CMAKE_CXX_STANDARD 17)

add_executable(estudiante main.cpp
        estudiante.c
        estudiante.h)
