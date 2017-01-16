#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <cmath>
#include "gtest/gtest.h"
#include "Matrix.h"
#include <exception>
#include <iostream>

using namespace std;

int maxPoints = 10;
int currentPoints = 0;

TEST(hw7Test, basicConstructor) {

  Matrix<int> m1(2, 2);
  Matrix<int> m2(4, 4);

  if (HasFailure()){
    cerr << "\nBasicConstructorTest has failed\"" << endl;
  }else {
    currentPoints += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints << "/" << maxPoints << endl;


}