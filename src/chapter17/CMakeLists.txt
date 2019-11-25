cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter17)
add_executable(src17 ${chapter17} tree.h tree.c petclub.c)