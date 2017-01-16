#include "gtest/gtest.h"
#include <math.h>
#include <memory>
#include "SortedDoublyLinkedList.hpp"

using namespace std;

int currentPoints_tailPointerTest = 0;
int maxPoints = 15;



TEST(hw3Test, tailPointerTest) {

  SortedDoublyLinkedList<int> basicList;
  basicList.add(44);
  basicList.add(88);
  basicList.add(66);
  basicList.add(88);
  basicList.add(99);
  basicList.add(999);
  EXPECT_FALSE(basicList.isEmpty());

  std::shared_ptr<Node<int>> node = basicList.getPointerTo(999);
  std::shared_ptr<Node<int>> node2 = basicList.getPointerTo(99);

  ASSERT_NE(node, nullptr);
  ASSERT_NE(node2, nullptr);

  EXPECT_EQ(node->getNext(), nullptr);

  EXPECT_EQ(node2->getNext(), node);

  if(HasFailure()) {
    cerr << "\n_tailPointerTest has failed\"" << endl;
  } else {
    currentPoints_tailPointerTest += 15;
  }

  cout << "\nCurrent POINTS:" << currentPoints_tailPointerTest << "/" << maxPoints << endl;

}