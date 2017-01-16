#pragma once

#include "StackInterface.hpp"
#include "Node.hpp"
#include <vector>
#include <cassert>

using namespace std;

template<class T>
class DLinkedStack : public StackInterface<T> {
 private:
  Node<T> *headPtr;    // Pointer to first node in the chain;
  Node<T> *topPtr;    // Pointer to (last) node in the chain that contains the stack's top
 public:

  DLinkedStack();

  DLinkedStack(const DLinkedStack<T> &aStack);    // Copy constructor

  virtual ~ DLinkedStack();    // Destructor

  Node<T> *getPointerTo(const T &target) const;

  bool isEmpty() const;

  bool push(const T &newItem);

  bool pop();

  T peek() const;

  vector<T> toVector() const;

  Node<T> *getHeadPTR() const;

  Node<T> *getTopPTR() const;
};

template<class T>
DLinkedStack<T>::DLinkedStack() : headPtr(nullptr), topPtr(nullptr) {
}

template<class T>
DLinkedStack<T>::DLinkedStack(const DLinkedStack<T> &aStack) {
  //TODO - Implement the copy constructor
}

template<class T>
DLinkedStack<T>::~DLinkedStack() {
  //TODO - Implement the destructor
}

template<class T>
Node<T> *DLinkedStack<T>::getPointerTo(const T &target) const {
  //TODO - Return the Node pointer that contains the target(return nullptr if not found)
  //when there is more than one target exists, return the first target from top.
}

template<class T>
bool DLinkedStack<T>::isEmpty() const {
  //TODO - Return True if the list is empty
}

template<class T>
bool DLinkedStack<T>::push(const T &newItem) {
  //TODO - Push an item on the Doubly Linked Stack
}

template<class T>
bool DLinkedStack<T>::pop() {
  //TODO - Pop an item from the stack - Return true if successful
}

template<class T>
T DLinkedStack<T>::peek() const {
  //Assume this never fails.
  //TODO - return the element stored at the top of the stack (topPtr)
}

template<class T>
vector<T> DLinkedStack<T>::toVector() const {
  // DO NOT MODIFY THIS FUNCTION
  vector<T> returnVector;
  // Put stack items into a vector in top to bottom order
  Node<T> *curPtr = topPtr;
  while (curPtr != nullptr) {
    returnVector.push_back(curPtr->getItem());
    curPtr = curPtr->getPrev();
  }
  return returnVector;
}

template<class T>
Node<T> *DLinkedStack<T>::getHeadPTR() const {
  // DO NOT MODIFY THIS FUNCTION
  return headPtr;
}

template<class T>
Node<T> *DLinkedStack<T>::getTopPTR() const {
  // DO NOT MODIFY THIS FUNCTION
  return topPtr;
}
