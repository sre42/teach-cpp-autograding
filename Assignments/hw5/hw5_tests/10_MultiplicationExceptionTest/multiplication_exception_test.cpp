#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <cmath>
#include "gtest/gtest.h"
#include "Matrix.h"


using namespace std;

int maxPoints = 10;
int currentPoints = 0;

TEST(hw7ExceptionsTest, MultiplicationExceptionTest) {

  twoD<int> expectedMatrix = {{31, 15,  -18, 34},
                              {43, -10, 68,  40},
                              {22, -1,  7,   21},
                              {50, 98,  149, 83}};
  twoD<int> intMatrix1 = {{1,  3, -3},
                          {-4, 4, 5},
                          {-1, 2, 0},
                          {6,  7, 8}};
  twoD<int> intMatrix2 = {{-2, 9, 3, 1},
                          {10, 4, 5, 11}
  };

  Matrix<int> m1(4, 3, intMatrix1);
  Matrix<int> m2(2, 4, intMatrix2);

  EXPECT_THROW(Matrix<int> m3 = m1 * m2, exception);

  if (HasFailure()){
    cerr << "\nMultiplicationExceptionTest has failed\"" << endl;
  }else {
    currentPoints += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints << "/" << maxPoints << endl;

}