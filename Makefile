G++ = g++ -std=c++14
FILES =  main.cpp 		\
		./src/Type.cpp 	\
		./src/validator/input_validation.cpp

EXE = Interprete

all:
	$(G++) $(FILES) -o $(EXE)