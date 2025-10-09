cmake_minimum_required(VERSION 3.16.3)
project(cmake3 C)
set(SOURCES
	src/add.c
	src/sub.c
	src/mul.c
	)

set(TEST 
	test/app.c
	)
set(INCLUDE
	include/math.h
	)
add_executable(app ${SOURCES} ${TEST} ${INCLUDE}) 
