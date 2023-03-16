cmake_minimum_required(VERSION 3.20)
project(Programmentwurf VERSION 1.0)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
add_compile_options(-Wall -Wextra -pedantic -O0)

add_executable(${PROJECT_NAME} Programmentwurf.c)

