cmake_minimum_required(VERSION 3.14)
project(learningC C)

set(CMAKE_C_STANDARD 11)

AUX_SOURCE_DIRECTORY(. chapter14)
add_executable(src14 ${chapter14} manybook.c friend.c friends.c funds1.c funds2.c funds3.c names1.c names2.c names3.c complit.c flexmemb.c funds.c booksave.c enum.c func_ptr.c)