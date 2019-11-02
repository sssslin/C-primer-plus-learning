cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter15)
add_executable(src15 ${chapter15} invert4.c fields.c dualview.c align.c)