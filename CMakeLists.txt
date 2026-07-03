cmake_minimum_required(VERSION 3.20)

project(Nova VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(nova app/main.cpp modules/logger/src/logger.cpp modules/config/src/config.cpp)
target_include_directories(nova PRIVATE modules/logger/include/ modules/config/include/)
