cmake_minimum_required(VERSION 3.16.3)
project(cmake2 C)
add_executable(app test/app.c src/add.c include/math.h)
