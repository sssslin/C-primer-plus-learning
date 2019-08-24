cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter8)
add_executable(src8 ${chapter8} echo_eof.c file_eof.c guess.c showchar1.c showchar2.c checking.c menuette.c)