cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter9)
add_executable(src9 ${chapter9} usehotel.c hotel.c hotel.h lockcheck.c swap1.c swap2.c)