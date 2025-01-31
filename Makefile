G++ = g++ -std=c++14
FILES =  main.cpp 		\
		./src/Type.cpp 	\
		./src/validator/input_validation.cpp

EXE = Interprete
DEL = rm

all:
	$(G++) $(FILES) -o $(EXE)

del:
	$(DEL) $(EXE)