#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include "node.h"

class SingleLinkedList {
private:
    Node* head;
    Node* next;
    int size;

public:
    SingleLinkedList();
    ~SingleLinkedList();

    void add(int value);
    void remove(int index);
    void print() const;
};

#endif