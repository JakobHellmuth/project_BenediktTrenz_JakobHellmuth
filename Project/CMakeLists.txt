# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(Project VERSION 1.0 LANGUAGES C CXX)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# define the c++ standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -pedantic -O0 -Werror)
# adding library
add_library(mylib SHARED src/main.c)

target_include_directories(mylib PUBLIC include)

add_executable(Project_exec src/main.c src/developer.c src/developer_group.c)

target_include_directories(Project_exec PUBLIC include)

target_link_libraries(Project_exec PRIVATE mylib)
