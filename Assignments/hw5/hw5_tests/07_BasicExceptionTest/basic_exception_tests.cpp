#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <cmath>
#include "gtest/gtest.h"
#include "Matrix.h"

using namespace std;

int maxPoints = 10;
int currentPoints = 0;

TEST(hw7ExceptionsTest, basicExceptionTest) {
  EXPECT_THROW(Matrix<int> m1(-4, 3), exception);
  EXPECT_THROW(Matrix<float> m1(-4, 3), exception);

  if (HasFailure()){
    cerr << "\nbasicExceptionTest has failed\"" << endl;
  }else {
    currentPoints += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints << "/" << maxPoints << endl;
}





