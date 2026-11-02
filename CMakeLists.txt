cmake_minimum_required(VERSION 3.25)

project(PstuLabs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(lab2
    sem1/lab2.cpp)

add_executable(lab3 
     sem1/lab3.cpp)

add_executable(lab4
     sem1/lab4.cpp)