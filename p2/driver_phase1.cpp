#include <iostream>
#include "Iterator.h"
#include "Node.h"
#include "List.h"


int main() {
    std::cout << std::endl;

    List list; 
    
    std::cout << "PUSH FRONT/BACK\n";           // test push front/back
    list.push_front(200);
    list.push_front(100);
    list.push_back(400);     
    list.push_back(600);
    list.push_back(800);
    list.print();                                // test forward traversal

    std::cout << "\nPOP FRONT\n";               // test pop front
    list.pop_front();
    list.print();

    std::cout << "\nFRONT\n";                   // test front
    std::cout << list.front() << "\n";
    list.print();

    Iterator it = list.begin();                 // point iterator to list head node (the first node)

    std::cout << "\nFIND/INSERT AFTER\n";       // test find and insert after
    std::cout << "Find 200 " << "\n";      
    it = list.find(200);                       // return an iterator to 200
    std::cout << "Insert 300 after " 
              << it.getData() << "\n";                      
    it = list.insertAfter(it, 300);            // insert 300 after 200 (middle case)
    std::cout << "Insert will return iterator to: " 
              << it.getData() << "\n";
    list.print();
    std::cout << "Find 800 " << "\n";      
    it = list.find(800);                       // return an iterator to 800
    std::cout << "Insert 900 after " 
              << it.getData() << "\n";        
    it = list.insertAfter(it, 900);            // insert 900 after 800 (edge case: insert a new tail node)   
    std::cout << "Insert will return iterator to: " 
              << it.getData() << "\n";     
    list.print();

    std::cout << "\nFIND/ERASE AFTER\n";        // test erase after 
    std::cout << "Find 300 " << "\n";  
    it = list.find(300);                       // return an iterator to 300
    std::cout << "Erase node after: "  
              << it.getData() << "\n";       
    it = list.eraseAfter(it);                  // erase node after 300, return pointer to node after erased node  (middle case)
    std::cout << "Erase will return iterator to: " 
              << it.getData() << "\n";          
    list.print();
    std::cout << "Find 800 " << "\n";                   
    it = list.find(800);                       // return an iterator to 800
    std::cout << "Erase node after: "
              << it.getData() << "\n";   
    std::cout << "Erase will return " 
              << "iterator to nullptr\n";            
    it = list.eraseAfter(it);                  // erase node after 800 (tail node), return pointer to nullptr  (edge case)    
    list.print();

    std::cout << "\nCOPY\n";                    // test duplicate
    List list_copy;
    list.duplicate(list_copy);                 // duplicate list without sharing memory
    it = list.find(300);                       // erase a node to modify the original list
    list.eraseAfter(it);                              
    list.print();
    list_copy.print();                           // test if the copy contains the original data to check for distinct memory allocation                                   

    std::cout << std::endl;
    return 0;
}