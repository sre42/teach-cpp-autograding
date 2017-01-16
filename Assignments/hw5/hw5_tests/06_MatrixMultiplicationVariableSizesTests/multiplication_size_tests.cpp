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


TEST(hw7IntTest, intMatrixMultiplicationVariableSizesTest) {
  twoD<int> expectedMatrix = {{31, 15,  -18, 34},
                              {43, -10, 68,  40},
                              {22, -1,  7,   21},
                              {50, 98,  149, 83}};
  twoD<int> intMatrix1 = {{1,  3, -3},
                          {-4, 4, 5},
                          {-1, 2, 0},
                          {6,  7, 8}};
  twoD<int> intMatrix2 = {{-2, 9, 3,  1},
                          {10, 4, 5,  11},
                          {-1, 2, 12, 0}};
  Matrix<int> m1(4, 3, intMatrix1);
  Matrix<int> m2(3, 4, intMatrix2);
  Matrix<int> m3 = m1 * m2;
  EXPECT_TRUE(checkTwoDVectors(expectedMatrix, m3.getMatrix(), m3.getRows(), m3.getCols()));

  if (HasFailure()){
    cerr << "\nintMatrixMultiplicationVariableSizesTest has failed\"" << endl;
  }else {
    currentPoints += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints << "/" << maxPoints << endl;

}

TEST(hw7FloatTest, floatMatrixMultiplicationVariableSizesTest) {
  twoD<float> expectedMatrix = {{31, 15,  -18, 34},
                                {43, -10, 68,  40},
                                {22, -1,  7,   21},
                                {50, 98,  149, 83}};
  twoD<float> floatMatrix1 = {{1,  3, -3},
                              {-4, 4, 5},
                              {-1, 2, 0},
                              {6,  7, 8}};
  twoD<float> floatMatrix2 = {{-2, 9, 3,  1},
                              {10, 4, 5,  11},
                              {-1, 2, 12, 0}};
  Matrix<float> m1(4, 3, floatMatrix1);
  Matrix<float> m2(3, 4, floatMatrix2);
  Matrix<float> m3 = m1 * m2;
  EXPECT_TRUE(checkTwoDVectors(expectedMatrix, m3.getMatrix(), m3.getRows(), m3.getCols()));

  if (HasFailure()){
    cerr << "\nfloatMatrixMultiplicationVariableSizesTest has failed\"" << endl;
  }else {
    currentPoints += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints << "/" << maxPoints << endl;

}