

#include "gtest/gtest.h"
#include <math.h>
#include <memory>
#include "SortedDoublyLinkedList.hpp"

using namespace std;

int currentPoints_emptyTest = 0;
int maxPoints = 5;



TEST(hw3Test, isEmptyTest) {

  SortedDoublyLinkedList<int> basicList;
  basicList.add(44);
  basicList.add(88);

  EXPECT_FALSE(basicList.isEmpty());

  basicList.remove(44);
  basicList.remove(88);

  EXPECT_TRUE(basicList.isEmpty());

  if (HasFailure()) {
    cerr << "\nemptyTest has failed" << endl;
  } else {
    currentPoints_emptyTest += 5;
  }


  cout << "\nCurrent POINTS:" << currentPoints_emptyTest << "/" << maxPoints << endl;


}