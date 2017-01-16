#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <cmath>
#include "gtest/gtest.h"
#include "Matrix.h"
#include <exception>
#include <iostream>


using namespace std;

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

int maxPoints = 20;
int currentPoints = 0;

TEST(hw7IntTest, intScalarMultiplicationTest) {
  twoD<int> expectedMatrix = {{6, 12, 18, 24},
                              {6, 12, 18, 24},
                              {6, 12, 18, 24},
                              {6, 12, 18, 24}};
  twoD<int> intMatrix1 = {{2, 4, 6, 8},
                          {2, 4, 6, 8},
                          {2, 4, 6, 8},
                          {2, 4, 6, 8}};
  int scalar = 3;
  Matrix<int> m1(4, 4, intMatrix1);
  Matrix<int> m3 = m1 * scalar;
  EXPECT_TRUE(checkTwoDVectors(expectedMatrix, m3.getMatrix(), m3.getRows(), m3.getCols()));

  if (HasFailure()){
    cerr << "\nintScalarMultiplicationTest has failed\"" << endl;
  }else {
    currentPoints += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints << "/" << maxPoints << endl;

}

TEST(hw7FloatTest, floatScalarMultiplicationTest) {
  twoD<float> expectedMatrix = {{6, 12, 18, 24},
                                {6, 12, 18, 24},
                                {6, 12, 18, 24},
                                {6, 12, 18, 24}};
  twoD<float> floatMatrix1 = {{2, 4, 6, 8},
                              {2, 4, 6, 8},
                              {2, 4, 6, 8},
                              {2, 4, 6, 8}};
  float scalar = 3;
  Matrix<float> m1(4, 4, floatMatrix1);
  Matrix<float> m3 = m1 * scalar;
  EXPECT_TRUE(checkTwoDVectors(expectedMatrix, m3.getMatrix(), m3.getRows(), m3.getCols()));

  if (HasFailure()){
    cerr << "\nfloatScalarMultiplicationTest has failed\"" << endl;
  }else {
    currentPoints += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints << "/" << maxPoints << endl;

}