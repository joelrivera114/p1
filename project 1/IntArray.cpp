#include "IntArray.h"
#include <cassert>

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
        int *newData = new int[maxValues*2+1]{};
        for(int i = 0; i<numValues; ++i){
            newData[i] = data[i];
        }
        delete [] data;
        data = newData;
        maxValues = maxValues*2+1;
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
        reserve(maxValues);
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
//phase 2
int IntArray::at(int index)
{
    assert(index >= 0 && index < numValues);
    return data[index];
}
void IntArray::resize(int n)
{
    assert(n>=0);
    if( n < numValues){
        numValues = n; 
    } else if(n > numValues){
        if(n>maxValues){
            reserve(n);
        }
        for(int i = numValues; i < n; ++i){
            data[i]= 0;
        }
        numValues = n;
    }
}
void IntArray::pop_back()
{
    assert(numValues>0);
    --numValues;
}
void IntArray::insert(int value, int index)
{
    assert(index >= 0 && index <= numValues);
    if(numValues == maxValues){
        reserve(maxValues);
    }
    for(int i = numValues-1; i >= index; --i){
        data[i+1]= data[i];
    }
    data[index] = value;
    ++numValues;
}
void IntArray::erase(int start, int end)
{
    /*parameters: start (start index), end (end index)
Validate start and end index values with an assertion.
Erase array values from index start up to and including index end.*/
    assert(numValues>0 && start >=0 && end <numValues);
    int count = end-start+1;
    for(int i = end+1; i <numValues; ++i){
        data[i-count] = data[i];
    }
    numValues -= count;
}