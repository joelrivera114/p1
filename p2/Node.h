#ifndef NODE_H
#define NODE_H
#include "Employee.h"

class Node {
private:
Employee data;                                              
Node *next;

public:
friend class Iterator;
friend class List;
Node();                     
Node(const Employee &d);                               
};

#endif

