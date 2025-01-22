#ifndef INPUT_VALIDATOR_H
#define INPUT_VALIDATOR_H

#include<fstream>

class Input_validation {
    private:
    std::fstream file;
    bool validExtention (const std::string& fileName, const std::string& extention) const;

    public:
    Input_validation ();
    explicit Input_validation (const std::string& fileName, const std::string& extention = "ssm");
    Input_validation(const std::fstream& fileName) = delete;
    ~Input_validation();
    bool validation (const std::fstream& file) const;


};

#endif