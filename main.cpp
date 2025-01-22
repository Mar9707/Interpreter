#include <iostream>
#include "./headers/Type.h"
#include "./headers/input_validator.h"

int main(int argc, char** argv) { // for input file
    if(argc < 2) {
        std::cerr << "Error, no file name!";
        return 1;
    }

    try {
        std::cout << argv[1] << std::endl;
        Input_validation inp_validat(argv[1]);
    } catch (const std::exception& e){
        std::cerr << "Exception: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}