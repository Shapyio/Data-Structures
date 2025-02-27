#ifndef NODE_H
#define NODE_H

class Node {
  private:
    int data;
    Node* next;
    Node* prev; // Used only for double linked lists

  public:
    Node(int value);
    ~Node(); // Useless

    // Getters and Setters
    void setData(int value);
    int getData() const;

    void setNext(Node* next);
    Node* getNext() const;

    void setPrev(Node* prev);
    Node* getPrev() const;
};

#endif