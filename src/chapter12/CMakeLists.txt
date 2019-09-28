cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter12)
add_executable(src12 ${chapter12} diceroll.c manydice.c diceroll.h dyn_arr.c where.c ../chapter13/count.c)