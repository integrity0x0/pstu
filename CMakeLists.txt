cmake_minimum_required(VERSION 3.25)

project(PstuLabs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(sem1_lab0
    sem1/lab0.cpp)

add_executable(sem1_lab1_task1
    sem1/lab1/task1.cpp)

add_executable(sem1_lab1_task2
    sem1/lab1/task2.cpp)