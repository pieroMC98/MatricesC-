#makfile 
#macros definition

G++	   = g++
source = main.cpp Matriz.cpp Sudoku.cpp
debug  = -g -Wall
O 	   = -o
build  = main
RUN    = ./

${build}: ${source}
	@clear
	@${G++} ${debug} ${source} ${O} ${build}

run: main
	@clear
	@${RUN}main
