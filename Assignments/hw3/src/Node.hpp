#pragma once

#include <memory>

template<class ItemType>
class Node {
 private:
  ItemType data;
  std::weak_ptr<Node<ItemType>> prev;
  std::shared_ptr<Node<ItemType>> next;
 public:
  Node();

  Node(const ItemType &anItem);

  Node(const ItemType &anItem, std::weak_ptr<Node<ItemType>> prevNodePtr, std::shared_ptr<Node<ItemType>> nextNodePtr);

  void setItem(const ItemType &anItem);

  void setPrev(std::weak_ptr<Node<ItemType>> prevNodePtr);

  void setNext(std::shared_ptr<Node<ItemType>> nextNodePtr);

  ItemType getItem() const;

  std::weak_ptr<Node<ItemType>> getPrev() const;

  std::shared_ptr<Node<ItemType>> getNext() const;
};

template<class ItemType>
Node<ItemType>::Node() : data(0), prev(), next(nullptr) {}

template<class ItemType>
Node<ItemType>::Node(const ItemType &anItem) : data(anItem), prev(), next(nullptr) {}

template<class ItemType>
Node<ItemType>::Node(const ItemType &anItem,
                     std::weak_ptr<Node<ItemType>> prevNodePtr,
                     std::shared_ptr<Node<ItemType>> nextNodePtr) : data(anItem),
                                                                    prev(prevNodePtr),
                                                                    next(nextNodePtr) {}

template<class ItemType>
void Node<ItemType>::setItem(const ItemType &anItem) { data = anItem; }

template<class ItemType>
void Node<ItemType>::setPrev(std::weak_ptr<Node<ItemType>> prevNodePtr) { prev = prevNodePtr; }

template<class ItemType>
void Node<ItemType>::setNext(std::shared_ptr<Node<ItemType>> nextNodePtr) { next = nextNodePtr; }

template<class ItemType>
ItemType Node<ItemType>::getItem() const { return data; }

template<class ItemType>
std::weak_ptr<Node<ItemType>> Node<ItemType>::getPrev() const { return prev; }

template<class ItemType>
std::shared_ptr<Node<ItemType>> Node<ItemType>::getNext() const { return next; }
