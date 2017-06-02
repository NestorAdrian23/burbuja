cmake_minimum_required(VERSION 2.8.9)
project(Burbuja)

include_directories(include)

set(SOURCES src/Burbuja src/main.cpp)

add_executable(Burbuja ${SOURCES})
