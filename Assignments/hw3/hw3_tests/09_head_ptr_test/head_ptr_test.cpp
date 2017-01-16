#include "gtest/gtest.h"
#include <math.h>
#include <memory>
#include "SortedDoublyLinkedList.hpp"

using namespace std;

int currentPoints_headPointerTest = 0;
int maxPoints = 15;



TEST(hw3Test, headPointerTest) {

  SortedDoublyLinkedList<int> basicList;
  basicList.add(44);
  basicList.add(88);
  basicList.add(66);
  basicList.add(88);
  basicList.add(88);
  basicList.remove(88);
  EXPECT_FALSE(basicList.isEmpty());

  std::shared_ptr<Node<int>> node = basicList.getPointerTo(44);
  std::shared_ptr<Node<int>> node2 = basicList.getPointerTo(66);
  std::shared_ptr<Node<int>> node3;
  std::shared_ptr<Node<int>> node4;
  ASSERT_NE(node, nullptr);
  ASSERT_NE(node2, nullptr);
  //ASSERT_NO_FATAL_FAILURE({node3 = node->getPrev();});
  //ASSERT_NO_FATAL_FAILURE({node4 = node2->getPrev();});

  EXPECT_EQ(node->getPrev().use_count(), 0);
  EXPECT_EQ(node2->getPrev().lock(), node);

  if(HasFailure()) {
    cerr << "\n_headPointerTest has failed\"" << endl;
  } else {
    currentPoints_headPointerTest += 15;
  }

  cout << "\nCurrent POINTS:" << currentPoints_headPointerTest << "/" << maxPoints << endl;

}