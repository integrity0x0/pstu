cmake_minimum_required(VERSION 3.25)

project(PstuLabs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(lab0
    bachelor/informatics/sem1/lab0.cpp
)