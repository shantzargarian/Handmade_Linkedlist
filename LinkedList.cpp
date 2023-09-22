//
// Created by Shant Zargarian on 3/16/23.
//
#ifndef LINKEDLISTCLASS_LINKEDLIST_CPP
#define LINKEDLISTCLASS_LINKEDLIST_CPP
#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList()
{}

template<typename T>
Node<T>* LinkedList<T>::search(const T& data)
{
    Node<T>* walker = head;
    while(walker != data)
    {
        walker = walker ->next;
    }

    return walker;
}

template<typename T>
void LinkedList<T>::addFirstNode(const T& data)
{
    Node<T>* n = new Node<T>;
    n -> data = data;

    head = n;
    tail = n;

    tail -> next = nullptr;
    head -> next = nullptr;
}

template<typename T>
void LinkedList<T>::push_front(const T& data)
{
    Node<T>*n = data;
    n -> next = head;
    head = n;
    _size++;
}

template<typename T>
void LinkedList<T>::push_back(const T& data) {

    if (_size == 0)
    {
        addFirstNode(data);
    } else
    {
        Node<T> *n = new Node<T>;
        n->data = data;
        tail->next = n;
        tail = n;
        tail->next = nullptr;
    }

    _size++;
}

template<typename T>
void LinkedList<T>::pop_front()
{
        remove(head -> data);
        //_size--;
}

template<typename T>
T& LinkedList<T>::front()
{
    return head;
}

template<typename T>
T& LinkedList<T>::back()
{
    return tail;
}

template<typename T>
int LinkedList<T>::size()
{
    return _size;
}

template<typename T>
bool LinkedList<T>::empty()
{
    if(_size == 0)
        return true;

    return false;
}

template<typename T>
void LinkedList<T>::remove(const T& data)
{
    Node<T>*target;
    Node<T>* walker = head;
    while(walker != target -> next)
    {
        walker = walker->next;
    }

    walker -> next = target -> next;
    _size--;
}

template<typename T>
void LinkedList<T>::insert_before(const T& source,const T& target)
{
    Node<T>* walker = head;
    Node<T>* n = new Node<T>;
    n-> data = source;
    while(walker ->next -> data != target)
    {
        walker  = walker -> next;
    }
    n->next = walker -> next;
    walker -> next = n;
    _size++;
}

template<typename T>
void LinkedList<T>::insert_after(const T& source,const T& target)
{
    Node<T>* walker = head;
    Node<T>* n = new Node<T>;
    n-> data = source;
    while(walker -> data != target)
    {
        walker  = walker -> next;
    }
    n->next = walker -> next;
    walker -> next = n;
    _size++;
}

template<typename S>
std::ostream& operator<<(std::ostream& out, const LinkedList<S>& list)
{
    Node<S>* walker = list.head;
    while(walker != nullptr)
    {
        std::cout<<walker -> data << " ";
        walker = walker->next;
    }

    return out;
}
#endif //LINKEDLISTCLASS_LINKEDLIST_CPP