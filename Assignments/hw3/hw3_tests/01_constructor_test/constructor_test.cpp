

#include "gtest/gtest.h"
#include <math.h>
#include <memory>
#include "SortedDoublyLinkedList.hpp"

using namespace std;



TEST(hw3Test, basicConstructorTest) {

  SortedDoublyLinkedList<int> basicList;

  if (HasFailure()) {
      cerr << "basicConstructorTest has failed" << endl;
  }

}

TEST(hw3Test, constructorTest) {

  SortedDoublyLinkedList<int> basicList;

  EXPECT_EQ(basicList.getCurrentSize(), 0) << "\nExpected size 0" << endl;
  EXPECT_TRUE(basicList.isEmpty()) << "\nExpected list empty" << endl;
  ASSERT_EQ(basicList.getPointerTo(55), nullptr) << "\nExpected nullptr from getPointerTo()" << endl;
  EXPECT_FALSE(basicList.contains(22)) << "\nExpected false form contains()" << endl;


  if (HasFailure()) {
      cerr << "\nconstructorTest has failed" << endl;
  }

}