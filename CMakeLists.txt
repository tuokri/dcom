cmake_minimum_required(VERSION 3.12)
project(dcom)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -pedantic)

add_subdirectory(${PROJECT_SOURCE_DIR}/src/)
