#makfile 
#macros definition

G++ = g++
source = main.cpp
object = main.cpp
debug = -g -Wall
O = -o
build = main
RUN = ./

${build}: ${object}
	${G++} ${debug} ${source} ${O} ${build}

run: main
	clear
	${RUN}main
