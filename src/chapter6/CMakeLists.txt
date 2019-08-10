cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter6)
add_executable(src6 ${chapter6} summing.c when.c while1.c while2.c cmpflt.c t_and_f.c truth.c trouble.c boolean.c sweetie1.c sweetie2.c for_cube.c for_down.c for_13s.c for_char.c for_geo.c for_wild.c for_none.c for_show.c postage.c zeno.c do_while.c entry.c rows1.c rows2.c scores_in.c power.c)