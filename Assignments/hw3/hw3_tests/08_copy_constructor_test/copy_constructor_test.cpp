#include "gtest/gtest.h"
#include <math.h>
#include <memory>
#include "SortedDoublyLinkedList.hpp"

using namespace std;

int currentPoints_copyConstructorTest = 0;
int maxPoints = 10;

template<class T>
bool equalVectors(vector<T> a, vector<T> b) {
  a.shrink_to_fit();
  b.shrink_to_fit();
  if (a.size() != b.size()) return false;
  else {
    for (int i = 0; i < a.size(); i++) {
      if (a[i] != b[i]) return false;
    }

  }
  return true;
}

TEST(hw3Test, copyConstructorTest) {

  SortedDoublyLinkedList<int> basicList;
  basicList.add(44);
  basicList.add(88);
  vector<int> vector1 = basicList.toVector();
  vector<int> vector2{44, 88};
  EXPECT_TRUE(equalVectors(vector1, vector2));

  SortedDoublyLinkedList<int> basicList2 = basicList;

  vector<int> vector3 = basicList2.toVector();
  EXPECT_TRUE(equalVectors(vector1, vector3));

  if(HasFailure()) {
    cerr << "\ncopyConstructorTest has failed\"" << endl;
  } else {
    currentPoints_copyConstructorTest += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_copyConstructorTest << "/" << maxPoints << endl;

}