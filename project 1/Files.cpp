#include "Files.h"
#include <fstream> 
#include <sstream> 

void read(const std::string &data, IntArray &a)
{
    std::ifstream file(data);
    std::string line;

    while(getline(file, line)){
        std::string token;
        std::stringstream parse(line);
        while(getline(parse,token,',')){
            int value = std::stoi(token);
            a.push_back(value);
        }
    }
}