#include <iostream>
#include <fstream>
#include "../headers/input_validation.h"


    Input_validation::Input_validation() = default;
    
    Input_validation::Input_validation(const std::string& fileName, const std::string& extention) {
        try {
            if(!validExtention(fileName, extention)){
                throw std::runtime_error("invalid file extention!");
            }

            file.open(fileName, std::ios::in);
            if(!validation(file)){
                throw std::runtime_error("Failed to open file");
            }

        } catch (const std::exception& e){
            std::cerr << "Error:" << e.what() << std::endl;
           // throw;
        }
    }

    Input_validation::~Input_validation(){
        if(file.is_open()){
            file.close();
        }
    }   

    bool Input_validation::validExtention (const std::string& fileName, const std::string& extention) const{
        size_t dot = fileName.rfind('.');

        if(dot == std::string::npos) return false;  
        
        return fileName.substr(dot + 1) == extention;
    }

    bool Input_validation::validation (const std::fstream& file) const {
        if(!file.is_open()){
            return false;
        }

        return true;
    }

