#ifndef INTARRAY_H
#define INTARRAY_H
#include <iostream>


class IntArray {
private:
int maxValues;
int numValues;
int *data;

public:
IntArray();
~IntArray();
bool empty();
int size();
int maxSize();
void reserve(int n);
void clear();
void push_back(int value);
void print();

x
};



#endif 