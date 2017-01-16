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

TEST(hw7ExceptionsTest, AdditionExceptionTest) {

  twoD<int> expectedMatrix = {{2, 4, 6, 8},
                              {2, 4, 6, 8},
                              {2, 4, 6, 8},
                              {2, 4, 6, 8}};
  twoD<int> intMatrix1 = {{1, 2, 3, 4},
                          {1, 2, 3, 4},
                          {1, 2, 3, 4},
                          {1, 2, 3, 4}};
  twoD<int> intMatrix2 = {{1, 2, 3, 4},
                          {1, 2, 3, 4},
                          {1, 2, 3, 4}
  };

  Matrix<int> m1(4, 4, intMatrix1);
  Matrix<int> m2(3, 4, intMatrix2);


  EXPECT_THROW(Matrix<int> m3 = m1 + m2, exception);

  if (HasFailure()){
    cerr << "\nAdditionExceptionTest has failed\"" << endl;
  }else {
    currentPoints += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints << "/" << maxPoints << endl;
}