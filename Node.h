//
// Created by Shant Zargarian on 3/16/23.
//

#ifndef LINKEDLISTCLASS_NODE_H
#define LINKEDLISTCLASS_NODE_H
#include "LinkedList.h"

template<typename T>
struct Node
{
    T data;
    Node<T>* next = nullptr;
};
#endif //LINKEDLISTCLASS_NODE_H
