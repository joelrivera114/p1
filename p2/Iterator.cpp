#include <iostream>
#include "Iterator.h"
#include "Node.h"

Iterator::Iterator(Node *n): current(n)       // point iterator to specific node
{}
void Iterator::next()                        // advance iterator to next node
{                                       
    current = current->next;
}
bool Iterator::hasNext()              // return true if current is a valid node (not nullptr), false otherwise
{   
    if(current != nullptr) { 
        return true; 
    } else {
        return false;
    }
} 
int& Iterator::getData()                // return a reference to the data stored in the current node
{ 
    return current->data;
}