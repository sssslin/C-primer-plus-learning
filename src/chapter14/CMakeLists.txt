cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter14)
add_executable(src14 ${chapter14} manybook.c friend.c friends.c)