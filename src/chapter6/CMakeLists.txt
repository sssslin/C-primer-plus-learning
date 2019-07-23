cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter6)
add_executable(src6 ${chapter6})