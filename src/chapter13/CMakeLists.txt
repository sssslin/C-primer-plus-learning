cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter13)
add_executable(src13 ${chapter13} count.c reducto.c addaword.c reverse.c append.c randbin.c)