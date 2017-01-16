

#include "gtest/gtest.h"
#include "SortedDoublyLinkedList.hpp"

using namespace std;

int currentPoints_addTest = 0;
int maxPoints = 15;

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



TEST(hw3Test, addToListTest) {

  SortedDoublyLinkedList<int> basicList;
  basicList.add(44);
  basicList.add(88);
  basicList.add(55);
  basicList.add(11);

  vector<int> vector1 = basicList.toVector();
  vector<int> vector2{11, 44, 55, 88};

  EXPECT_TRUE(equalVectors(vector1, vector2));

  if(HasFailure()) {
    cerr << "\naddToListTest has failed\"" << endl;
  } else {
    currentPoints_addTest += 15;
  }

  cout << "\nCurrent POINTS:" << currentPoints_addTest << "/" << maxPoints << endl;



}