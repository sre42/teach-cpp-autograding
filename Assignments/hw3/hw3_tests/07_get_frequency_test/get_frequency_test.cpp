#include "gtest/gtest.h"
#include <math.h>
#include <memory>
#include "SortedDoublyLinkedList.hpp"

using namespace std;

int currentPoints_getFrequencyTest = 0;
int maxPoints = 5;



TEST(hw3Test, getFrequencyTest) {

  SortedDoublyLinkedList<int> basicList;
  basicList.add(44);
  basicList.add(88);
  basicList.add(66);
  basicList.add(88);
  basicList.add(88);
  basicList.remove(88);
  EXPECT_FALSE(basicList.isEmpty());

  EXPECT_EQ(basicList.getFrequencyOf(44), 1);
  EXPECT_EQ(basicList.getFrequencyOf(88), 2);
  EXPECT_EQ(basicList.getFrequencyOf(77), 0);

  if(HasFailure()) {
    cerr << "\ngetFrequencyTest has failed\"" << endl;
  } else {
    currentPoints_getFrequencyTest += 5;
  }

  cout << "\nCurrent POINTS:" << currentPoints_getFrequencyTest << "/" << maxPoints << endl;

}