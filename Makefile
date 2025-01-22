G++ = g++
FILES =  main.cpp 		\
		./src/Type.cpp 	\
		./src/input_validation.cpp

EXE = Interprete

all:
	$(G++) $(FILES) -o $(EXE)