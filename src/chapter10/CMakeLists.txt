cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter10)
add_executable(src10 ${chapter10} day_mon1.c somedata.c day_mon2.c designate.c bounds.c rain.c pnt_add.c day_mon3.c sum_arr1.c sum_arr2.c order.c ptr_ops.c arf.c zippo1.c zippo2.c array2d.c vararr2d.c flc.c)