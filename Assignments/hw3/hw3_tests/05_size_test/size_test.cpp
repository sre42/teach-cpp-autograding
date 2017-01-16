
#include "gtest/gtest.h"
#include "SortedDoublyLinkedList.hpp"

using namespace std;

int currentPoints_sizeTest = 0;
int maxPoints = 5;



TEST(hw3Test, sizeTest) {

  SortedDoublyLinkedList<int> basicList;
  basicList.add(44);
  basicList.add(88);
  basicList.add(11);
  basicList.add(22);

  EXPECT_GT(basicList.getCurrentSize(), 0);
  EXPECT_EQ(basicList.getCurrentSize(), 4);

  basicList.remove(11);
  basicList.remove(44);

  EXPECT_EQ(basicList.getCurrentSize(), 2);

  if(HasFailure()) {
    cerr << "\nsizeTest has failed\"" << endl;
  } else {
    currentPoints_sizeTest += 5;
  }

  cout << "\nCurrent POINTS:" << currentPoints_sizeTest << "/" << maxPoints << endl;

}