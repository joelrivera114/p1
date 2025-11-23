#ifndef LIST_H
#define LIST_H
#include "Node.h"
#include "Iterator.h"

class List {
private:                                               
Node *head;                                 // pointer to the first node                                             
Node *tail;                                 // pointer to the last node

public:
List();   // constructor: construct an empty list
~List();      
Iterator begin();  
Iterator end();
bool empty();
int& front();
void push_front(const int &d);
void push_back(const int &d);  
void pop_front();
Iterator insertAfter(Iterator it, const int &d); 
Iterator eraseAfter(Iterator it);
void print();
void duplicate(List &b);  
Iterator find(int d);              
};

#endif