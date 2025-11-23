#include "Node.h"
#include <iostream>

Node::Node(): data(0), next(nullptr) 
{}                      
Node::Node(const Employee &d): data(d), next(nullptr)
{}                                