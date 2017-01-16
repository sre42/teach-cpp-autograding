#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <cmath>
#include "gtest/gtest.h"
#include "Matrix.h"
#include <exception>
#include <iostream>

using namespace std;

int maxPoints= 20;
int currentPoints = 0;

template<class T>
bool checkTwoDVectors(twoD<T> vec1, twoD<T> vec2, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (abs(vec1[i][j]) - abs(vec2[i][j]) > 0.3) return false;
      //cout << "Writing: i: " << i << " j: " << j << " val: " << matrix[i][j] << endl;
    }
  }
  return true;
}

TEST(hw7IntTest, intMatrixMultiplicationTest) {
  twoD<int> expectedMatrix = {{20, 40, 60, 80},
                              {20, 40, 60, 80},
                              {20, 40, 60, 80},
                              {20, 40, 60, 80}};
  twoD<int> intMatrix1 = {{2, 4, 6, 8},
                          {2, 4, 6, 8},
                          {2, 4, 6, 8},
                          {2, 4, 6, 8}};
  twoD<int> intMatrix2 = {{1, 2, 3, 4},
                          {1, 2, 3, 4},
                          {1, 2, 3, 4},
                          {1, 2, 3, 4}};
  Matrix<int> m1(4, 4, intMatrix1);
  Matrix<int> m2(4, 4, intMatrix2);
  Matrix<int> m3 = m1 * m2;
  EXPECT_TRUE(checkTwoDVectors(expectedMatrix, m3.getMatrix(), m3.getRows(), m3.getCols()));

  if (HasFailure()){
    cerr << "\nintMatrixMultiplicationTest has failed\"" << endl;
  }else {
    currentPoints += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints << "/" << maxPoints << endl;

}

TEST(hw7FloatTest, floatMatrixMultiplicationTest) {
  twoD<float> expectedMatrix = {{30.6, 40.2, 37.92, 11.88},
                                {34, 45.41, 42.12, 13.51},
                                {30.6, 40.2, 37.92, 11.88},
                                {34, 45.41, 42.12, 13.51}};
  twoD<float> floatMatrix1 = {{1.5, 2.4, 1.2, 4.5},
                              {1.1, 2.5, 1.8, 5.5},
                              {1.5, 2.4, 1.2, 4.5},
                              {1.1, 2.5, 1.8, 5.5}};
  twoD<float> floatMatrix2 = {{4.5, 4.6, 5.6, 1.2},
                              {1.0, 3.5, 1.2, 1.3},
                              {1.0, 3.5, 1.2, 1.3111},
                              {4.5, 4.6, 5.6, 1.2}};
  Matrix<float> m1(4, 4, floatMatrix1);
  Matrix<float> m2(4, 4, floatMatrix2);
  Matrix<float> m3 = m1 * m2;
  EXPECT_TRUE(checkTwoDVectors(expectedMatrix, m3.getMatrix(), m3.getRows(), m3.getCols()));

  if (HasFailure()){
    cerr << "\nfloatMatrixMultiplicationTest has failed\"" << endl;
  }else {
    currentPoints += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints << "/" << maxPoints << endl;

}