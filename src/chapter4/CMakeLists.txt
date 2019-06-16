cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter4)
add_executable(srcc ${chapter4} praise1.c praise2.c pizza.c defines.c printout.c)