//
// Created by Shant Zargarian on 3/16/23.
//

#ifndef LINKEDLISTCLASS_LINKEDLIST_H
#define LINKEDLISTCLASS_LINKEDLIST_H
#include "Node.h"
#include <iostream>
//#include "LinkedList.cpp"

template<typename T>
class LinkedList {

private:
    Node<T>* head, *tail;
    int _size = 0;
    Node<T>* search(const T& data);
    void addFirstNode(const T& data);

public:
    LinkedList();
    void push_front(const T& data);
    void push_back(const T& data);
    void pop_front();
    T& front();
    T& back();
    int size();
    bool empty();
    void remove(const T& data);
    void insert_before(const T& source,const T& target);
    void insert_after(const T& source,const T& target);


    template<typename S>
    friend std::ostream& operator<<(std::ostream& out, const LinkedList<S>& list);

    template <typename F>
    friend std::istream &operator>>(std::istream &is, const LinkedList<F> & input);



};

#include "LinkedList.cpp"
#endif //LINKEDLISTCLASS_LINKEDLIST_H
