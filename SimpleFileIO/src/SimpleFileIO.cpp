#include "SimpleFileIO.h"

#include <iostream>
#include <fstream>

bool writeToFile(const std::string& filename, const std::string& content){
    std::ofstream file(filename);
    if(!file){
        std::cerr << "Error: could not open file for writing. \n";
        return false;
    }
    file << content;
    file.close();
    return true;   
}

std::string readFromFile(const std::string& filename){
    std::ifstream file(filename);
    if(!file){
        std::cerr << "Error: could not open file for reading.\n";
        return "";
    }
    std::string content, line;
    while (std::getline(file, line))
    {
        content += line += "\n";
    }
    file.close();
    return content;
}

