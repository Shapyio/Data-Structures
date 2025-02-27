#include "../headers/node.h"

// Constructor
Node::Node(int value) {
  this->next = nullptr;
  this->prev = nullptr;
  this->data = value;
}

// Destructor
Node::~Node() {
  // Handled by whatever memory allocator is using it.
}

// Getters/Setters
void Node::setData(int data) {
  this->data = data;
}
int Node::getData() const {
  return this->data;
}

void Node::setNext(Node* nextPtr) {
  this->next = nextPtr;
}
Node* Node::getNext() const {
  return this->next;
}

void Node::setPrev(Node* prevPtr) {
  this->prev = prevPtr;
}
Node* Node::getPrev() const {
  return this->prev;
}