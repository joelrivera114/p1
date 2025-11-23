#include <iostream>
#include "List.h"

List::List(): head(nullptr), tail(nullptr) {}     // constructor: construct an empty list
List::~List()                                     // destructor: safe deletion of all nodes in the list
{
    Node *n = head;                         // point n to the first node
    Node *backup = nullptr;
    while(n != nullptr) {                   // advance n through all nodes in the list
        backup = n;                         // point backup to node n
        n = n->next;                        // advance n to the next node
        delete backup;                      // delete the backup node
    }
}      
Iterator List::begin() {                          // return an iterator pointing to the first node
    return Iterator(head);
}  
Iterator List::end() {                            // return an iterator to the value past the end of the list (nullptr)
    return Iterator(nullptr);
}
bool List::empty() {
    if(head == nullptr) {                      
        return true;
    } else {
        return false;
    }
}
Employee& List::front() {
    return head->data;
}
void List::push_front(const Employee &d) {
    Node *n = new Node(d);                      // point n to a new node                                   
    n->next = head;                        // link n before the first node      
    head = n;                              // n becomes the new first node

    if(tail == nullptr) { tail = n; } // if list was empty, n becomes the new last node
}
void List::push_back(const Employee &d){
    if( empty() ) {                         // if list is empty: push_front and exit
        push_front(d);
        return;
    }
    Node *n = new Node(d);                      // point n to new node
    tail->next = n;                        // link n after the last node                      
    tail = n;                              // n becomes the new last node
}  
void List::pop_front(){
    if( empty() ) {                         // if list is empty: exit
        return; 
    }
    Node *n = head;                        // point n to the first node
    head = head->next;                // second node becomes the new first node
    delete n;                                   // delete the original first node

    if(head == nullptr) {                  // if list will be empty, reset tail for an empty list
        tail = nullptr; 
    }   
}
Iterator List::insertAfter(Iterator it, const Employee &d){   
    if( empty() || it.current == nullptr) { // if list is empty or iterator invalid, 
        return it;                              // exit and return the original iterator
    }
    Node *n = new Node(d);                      // point n to a new node
    n->next = it.current->next;                 // link n before the node after the iterator node
    it.current->next = n;                       // link the iterator node before node n

    if(n->next == nullptr) {tail = n; }   // if t was the second to last node, n becomes the new last node

    return Iterator(n);                         // return an iterator to the newly inserted node
} 
Iterator List::eraseAfter(Iterator it){
    if( empty() || it.current == nullptr || it.current->next == nullptr) { 
        return it;                              // if list is empty, iterator invalid or iterator points to last node,             
    }                                           // exit and return the original iterator   
    Node *n = it.current->next;                 // point n to the node after t
    it.current->next = n->next;                 // link iterator before the node that is after n

    if( n->next == nullptr ) { tail = it.current; } // if n is the last node, update tail to point to the it node

    delete n;                                   // remove the node after t (n)

    return Iterator(it.current->next);          // return an iterator to the node after the erased node
}
void List::print(){
    Iterator itr = begin();                // point iterator to the first node   
    while( itr.hasNext() ) {                    // advance the iterator through all nodes in list   
        std::cout << itr.getData() << " ";      // print the data of the iterator node
        itr.next();                             // point the iterator to the next node
    }   
    std::cout << "\n";    
}
void List::duplicate(List &b){
    Iterator itr = begin();                   // point iterator to the first node   
    while( itr.hasNext() ) {                    // advance the iterator through all nodes in list   
        b.push_back(itr.getData());            // copy the data of the iterator node from list A into list B
        itr.next();                             // point the iterator to the next node
    }   
}  
Iterator List::find(Employee d){
    Iterator itr = begin();                // point iterator to the first node   
    while( itr.hasNext() ) {                    // advance the iterator through all nodes in list  
        if( itr.getData() == d ) {              // if node n stores the equivalent of d, 
            return itr;                         // return an iterator to the node storing the equivalent of d
        }
        itr.next();                             // point iterator to the next node
    }   
    return Iterator(nullptr);                   // if data was not found, return iterator pointing to nullptr
}              