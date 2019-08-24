cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter7)
add_executable(src7 ${chapter7} paint.c skippart.c break.c animals.c vowels.c)