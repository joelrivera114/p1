#ifndef ITERATOR_H
#define ITERATOR_H
#include "Node.h"

class Iterator {
private:
Node *current;

public:
friend class List;
Iterator(Node *n);
void next();
bool hasNext(); 
int& getData();
};

#endif