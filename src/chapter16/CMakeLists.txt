cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter16)
add_executable(src16 ${chapter16} mac_arg.c subst.c glue.c variadic.c names_st.h names_st.c useheader.c ifdef.c names.h doubinc1.c predef.c mytype.c rect_pol.c generic.c byebye.c qsorter.c assert.c statasrt.c mems.c varargs.c)