#makfile 
#macros definition

G++	   = g++
source = Fraccion.cpp Matriz.cpp main.cpp
debug  = -g -Wall
O 	   = -o
build  = main
RUN    = ./

${build}: ${source}
	@clear
	@${G++} ${debug} ${source} ${O} ${build}

run: main
	@clear
	@${RUN}main 1> out.txt
