cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter5)
add_executable(src5 ${chapter5} golf.c squares.c wheat.c divide.c rule.c sizeof.c min_sec.c add_one.c post_pre.c bottles.c)