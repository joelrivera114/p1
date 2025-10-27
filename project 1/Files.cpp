#include "Files.h"
#include <fstream> 
#include <sstream> 

void read(IntArray& data)
{
    std::ifstream file("Data.csv");
    std::string line;

    while(getline(file, line)){
        std::string token;
        std::stringstream parse(line);
        while(getline(parse,token,',')){
            int value = std::stoi(token);
            data.push_back(value);
        }
    }
    file.close();
}