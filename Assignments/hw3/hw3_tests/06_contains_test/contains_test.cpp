
#include "gtest/gtest.h"
#include "SortedDoublyLinkedList.hpp"

using namespace std;

int currentPoints_containsTest = 0;
int maxPoints = 5;



TEST(hw3Test, containsTest) {

  SortedDoublyLinkedList<int> basicList;
  basicList.add(44);
  basicList.add(88);
  basicList.add(66);
  basicList.add(88);
  basicList.add(88);
  basicList.remove(88);
  EXPECT_FALSE(basicList.isEmpty());
  EXPECT_TRUE(basicList.contains(88));
  EXPECT_TRUE(basicList.contains(66));
  EXPECT_FALSE(basicList.contains(77));

  if(HasFailure()) {
    cerr << "\ncontainsTest has failed\"" << endl;
  } else {
    currentPoints_containsTest += 5;
  }

  cout << "\nCurrent POINTS:" << currentPoints_containsTest << "/" << maxPoints << endl;

}