cmake_minimum_required(VERSION 3.25)

project(PstuLabs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(lab0
    bachelor/informatics/sem1/lab0.cpp)

add_executable(lab1 
    bachelor/informatics/sem1/lab1.cpp)