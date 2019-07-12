#makfile 
#macros definition
G++ = g++
source = main.cpp
object = main.cpp
debug = -Wall
O = -o
build = main
RUN = ./
cls = clear

${build}:${object}
					${G++} ${debug} ${source} ${O} ${build}
run: main
			${cls}
			${RUN}
