#include "IntArray.h"

IntArray::IntArray():maxValues(5), numValues(0), data(new int[5]{})
{}
IntArray::~IntArray()
{
    delete [] data;
}
bool IntArray::empty()
{
    return numValues == 0;
}
int IntArray::size()
{
    return numValues;
}
int IntArray::maxSize()
{
    return maxValues;
}
void IntArray::reserve(int n)
{
    if (n>maxValues){
        int *newData = new int[n]{};
        for(int i = 0; i<numValues; ++i){
            newData[i] = data[i];
        }
        delete [] data;
        data = newData;
        maxValues = n;
    }
}
void IntArray::clear()
{
    for(int i = 0; i<maxValues;++i){
        data[i] = 0;
    }
    numValues = 0;
}
void IntArray::push_back(int value)
{
    if(numValues>=maxValues){
        reserve(maxValues*2);
    }
    data[numValues]=value;
    ++numValues;
}
void IntArray::print()
{
    for(int i = 0; i<numValues; ++i){
        std::cout<<data[i]<<" ";
    }
    std::cout<<std::endl;
}