//
// Created by Chohee Kim on 11/8/16.
//

#include "gtest/gtest.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

int currentPoints_CenterTests = 0;
int maxPoints = 30;


TEST(hw4TestCircle, circleCenterTest) {

  Circle<int> *circleInt = new Circle<int>(2, 2, 4);
  Circle<float> *circleFloat = new Circle<float>(4.4, 2.2, 4.4);

  EXPECT_EQ(circleInt->getX(), 2);
  EXPECT_EQ(circleInt->getY(), 2);

  EXPECT_FLOAT_EQ(circleFloat->getX(), 4.4);
  EXPECT_FLOAT_EQ(circleFloat->getY(), 2.2);

  if (HasFailure()){
    cerr << "\nCircleCenterTest has failed\"" << endl;
  }else {
    currentPoints_CenterTests += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_CenterTests << "/" << maxPoints << endl;

}

TEST(hw4TestRectangle, rectangleCenterTest) {

  Rectangle<int> *rectangleInt = new Rectangle<int>(4, 4, 5, 6);
  Rectangle<float> *rectangleFloat = new Rectangle<float>(4.4, 4.4, 5.4, 6);

  EXPECT_EQ(rectangleInt->getX(), 4);
  EXPECT_EQ(rectangleInt->getY(), 4);

  EXPECT_FLOAT_EQ(rectangleFloat->getX(), 4.4);
  EXPECT_FLOAT_EQ(rectangleFloat->getY(), 4.4);

  if (HasFailure()){
    cerr << "\nRectangleCenterTest has failed\"" << endl;
  }else {
    currentPoints_CenterTests += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_CenterTests << "/" << maxPoints << endl;
}

TEST(hw4TestSquare, squareCenterTest) {

  Square<int> *squareInt = new Square<int>(3, 3, 3);
  Square<float> *squareFloat = new Square<float>(5.5, 3, 4.4);

  EXPECT_EQ(squareInt->getX(), 3);
  EXPECT_EQ(squareInt->getY(), 3);

  EXPECT_FLOAT_EQ(squareFloat->getX(), 5.5);
  EXPECT_FLOAT_EQ(squareFloat->getY(), 3);

  if (HasFailure()){
    cerr << "\nSquareCenterTest has failed\"" << endl;
  }else {
    currentPoints_CenterTests += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_CenterTests << "/" << maxPoints << endl;

}