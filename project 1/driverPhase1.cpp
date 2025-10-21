#include <iostream>
#include "IntArray.h"
#include "Files.h"

int main(){
    IntArray aI{};
    read("Data.csv", aI);
    aI.print();

    return 0;
}
