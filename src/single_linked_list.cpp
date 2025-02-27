#include "../headers/single_linked_list.h"
#include <iostream>

// Constructor
SingleLinkedList::SingleLinkedList() {
  this->head = nullptr;
  this->next = nullptr;
  this->size = 0;
}

// Destructor
SingleLinkedList::~SingleLinkedList() {
  Node* current = head;
  while (current) {
      Node* nextNode = current->getNext();
      delete current; 
      current = nextNode;
  }
}

void SingleLinkedList::add(int value) {
  Node *new_node = new Node(value);

  if (this->head == nullptr) {
    this->head = new_node;
  } else {
    Node* current = this->head;
    while (current->getNext() != nullptr) {
      current = current->getNext();
    }
    current->setNext(new_node);
  }
}

void SingleLinkedList::remove(int index) {
  if(index < 0 || index >= size) { // Out of bounds check
    std::cerr << "Index out of bounds" << std::endl;
    return;
  }
  
  if(index == 0) { // If index to remove is head
    Node* temp = head;
    head = head->getNext();
    delete temp;
    size--;
    return;
  }
  
  Node* current = head; // "Normal" case remove
  for(int i = 0; i < index - 1; i++) {
    current = current->getNext();
  }
  Node* nodeToRemove = current->getNext();
  current->setNext(nodeToRemove->getNext());
  delete nodeToRemove;
}

void SingleLinkedList::print() const {
  Node *current = head;
  while (current) {
    std::cout << current->getData() << " ";
    current = current->getNext();
  }
}