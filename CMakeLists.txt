cmake_minimum_required(VERSION 3.20)

project(Nyrvox VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(nyrvox
	app/main.cpp
	bootstrap/src/boot.cpp
	modules/logger/src/logger.cpp
	modules/config/src/config.cpp
)

file(COPY configs DESTINATION ${CMAKE_BINARY_DIR})
target_include_directories(nyrvox PRIVATE
	bootstrap/include
	modules/logger/include
	modules/config/include
)
