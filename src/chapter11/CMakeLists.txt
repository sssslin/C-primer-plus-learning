cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter11)
add_executable(src11 ${chapter11} strptr.c addresses.c arrchar.c p_and_s.c getputs.c fgets1.c fgets2.c fgets3.c scan_str.c put_out.c nono.c put1.c put2.c put_put.c test_fit.c str_cat.c join_chk.c nogo.c compare.c compback.c quit_chk.c starsrch.c copy1.c copy2.c copy3.c format.c sort_str.c mod_str.c repeat.c hello.c strcnvt.c)