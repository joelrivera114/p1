#ifndef ITERATOR_H
#define ITERATOR_H
#include "Node.h"
#include "Employee.h"

class Iterator {
private:
Node *current;

public:
friend class List;
Iterator(Node *n);
void next();
bool hasNext(); 
Employee& getData();
};

#endif