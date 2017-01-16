#pragma once

template<class T>
class Node {
 private:
  T data;
  Node<T> *prev;
  Node<T> *next;
 public:
  Node();

  Node(const T &anItem);

  Node(const T &anItem, Node<T> *prevNodePtr, Node<T> *nextNodePtr);

  void setItem(const T &anItem);

  void setPrev(Node<T> *prevNodePtr);

  void setNext(Node<T> *nextNodePtr);

  T getItem() const;

  Node<T> *getPrev() const;

  Node<T> *getNext() const;
};

template<class T>
Node<T>::Node() : data(0), prev(nullptr), next(nullptr) {}

template<class T>
Node<T>::Node(const T &anItem) : data(anItem), prev(nullptr), next(nullptr) {}

template<class T>
Node<T>::Node(const T &anItem, Node<T> *prevNodePtr, Node<T> *nextNodePtr) : data(anItem),
                                                                             prev(prevNodePtr),
                                                                             next(nextNodePtr) {}

template<class T>
void Node<T>::setItem(const T &anItem) { data = anItem; }

template<class T>
void Node<T>::setPrev(Node<T> *prevNodePtr) { prev = prevNodePtr; }

template<class T>
void Node<T>::setNext(Node<T> *nextNodePtr) { next = nextNodePtr; }

template<class T>
T Node<T>::getItem() const { return data; }

template<class T>
Node<T> *Node<T>::getPrev() const { return prev; }

template<class T>
Node<T> *Node<T>::getNext() const { return next; }