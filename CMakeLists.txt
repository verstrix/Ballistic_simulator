cmake_minimum_required(VERSION 4.3)
project(ballistic_simulator C)

set(CMAKE_C_STANDARD 23)

find_package(raylib REQUIRED)

add_executable(ballistic_simulator main.c)
target_link_libraries(ballistic_simulator PRIVATE m)
target_link_libraries(ballistic_simulator PRIVATE raylib m)