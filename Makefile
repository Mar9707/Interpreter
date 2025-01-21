G++ = g++
FILES = main.cpp ./src/Type.cpp
EXE = Interprete

all:
	$(G++) $(FILES) -o $(EXE)