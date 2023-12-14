cmake_minimum_required(VERSION 3.26)
project(estudiante)

set(CMAKE_CXX_STANDARD 17)

# Agrega archivos de código fuente
add_executable(estudiante
        main.cpp
        estudiante.cpp
        estudiante.h)

