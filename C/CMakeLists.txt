cmake_minimum_required(VERSION 3.10)

project(C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(Hello_world src/Hello_world.c)
add_executable(Calculator src/calculator.c)
add_executable(printnum src/printnum.c)
add_executable(Sum src/sum.c)
add_executable(Swap src/swap.c)
add_executable(ScoreSheet src/score_sheet.c)

