#include "gtest/gtest.h"
#include <math.h>
#include <memory>
#include "SortedDoublyLinkedList.hpp"

using namespace std;

int currentPoints_midPointerTest = 0;
int maxPoints = 20;



TEST(hw3Test, midPointerTest) {

  SortedDoublyLinkedList<int> basicList;
  basicList.add(44);
  basicList.add(88);
  basicList.add(55);
  basicList.add(66);
  basicList.add(77);
  basicList.add(88);
  basicList.add(99);
  basicList.add(999);


  EXPECT_FALSE(basicList.isEmpty());

  std::shared_ptr<Node<int>> node = basicList.getPointerTo(55);
  std::shared_ptr<Node<int>> node2 = basicList.getPointerTo(66);
  std::shared_ptr<Node<int>> node3 = basicList.getPointerTo(77);

  ASSERT_NE(node, nullptr);
  ASSERT_NE(node2, nullptr);
  ASSERT_NE(node3, nullptr);


  EXPECT_EQ(node->getNext(), node2);
  EXPECT_EQ(node2->getNext(), node3);
  EXPECT_EQ(node2->getPrev().lock(), node);
  EXPECT_EQ(node3->getPrev().lock(), node2);

  if(HasFailure()) {
    cerr << "\nmidPointerTest has failed\"" << endl;
  } else {
    currentPoints_midPointerTest += 20;
  }

  cout << "\nCurrent POINTS:" << currentPoints_midPointerTest << "/" << maxPoints << endl;

}