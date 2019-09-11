cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter10)
add_executable(src10 ${chapter10} day_mon1.c somedata.c day_mon2.c)