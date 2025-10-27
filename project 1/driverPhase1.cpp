#include <iostream>
#include "IntArray.h"
#include "Files.h"

int main(){
    IntArray aI{};
    read(aI);
    aI.print();
    std::cout<<aI.size()<<std::endl;
    std::cout<<std::endl;

    aI.clear();
    std::cout<<aI.empty()<<std::endl;
    aI.push_back(60);
    aI.reserve(20);
    std::cout<<aI.size()<<std::endl;
    std::cout<<aI.maxSize()<<std::endl;
    std::cout<<aI.empty()<<std::endl;
    aI.print();
    

    return 0;
}
