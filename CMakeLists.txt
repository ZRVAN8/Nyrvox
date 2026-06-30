cmake_minimum_required(VERSION 3.20)

project(Nova VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(nova src/main.cpp)
