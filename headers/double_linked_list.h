#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include "node.h"

class DoubleLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    DoubleLinkedList();
    ~DoubleLinkedList();

    void add(int value);
    void remove(int index);
    void print() const;
};

#endif