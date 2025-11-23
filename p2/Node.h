#ifndef NODE_H
#define NODE_H

class Node {
private:
int data;                                              
Node *next;

public:
friend class Iterator;
friend class List;
Node();                     
Node(const int &d);                               
};

#endif

