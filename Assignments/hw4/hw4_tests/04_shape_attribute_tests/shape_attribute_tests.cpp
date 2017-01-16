//
// Created by Chohee Kim on 11/8/16.
//

#include "gtest/gtest.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "CustomException.h"

using namespace std;

int maxPoints = 30;
int currentPoints_AttributeTests = 0;

TEST(hw4TestCircle, circleRadiusTest){

  Circle<int> *circleInt = new Circle<int>(2, 2, 4);
  Circle<float> *circleFloat = new Circle<float>(4.4, 2.2, 4.4);

  EXPECT_EQ(circleInt->getRadius(), 4);
  EXPECT_FLOAT_EQ(circleFloat->getRadius(), 4.4);

  if (HasFailure()){
    cerr << "\nCircleRadiusTest has failed\"" << endl;
  }else {
    currentPoints_AttributeTests += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_AttributeTests << "/" << maxPoints << endl;
}

TEST(hw4TestRectangle, rectangleWHTest) {

  Rectangle<int> *rectangleInt = new Rectangle<int>(4, 4, 5, 6);
  Rectangle<float> *rectangleFloat = new Rectangle<float>(4.4, 4.4, 5.4, 6);

  EXPECT_EQ(rectangleInt->getWidth(), 5);
  EXPECT_EQ(rectangleInt->getHeight(), 6);

  EXPECT_FLOAT_EQ(rectangleFloat->getWidth(), 5.4);
  EXPECT_FLOAT_EQ(rectangleFloat->getHeight(), 6);

  if (HasFailure()){
    cerr << "\nRectangleAttributeTest has failed\"" << endl;
  }else {
    currentPoints_AttributeTests += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_AttributeTests << "/" << maxPoints << endl;

}

TEST(hw4TestSquare, squareSideTest) {

  Square<int> *squareInt = new Square<int>(3, 3, 3);
  Square<float> *squareFloat = new Square<float>(5.5, 3, 4.4);

  EXPECT_EQ(squareInt->getWidth(), 3);
  EXPECT_EQ(squareInt->getHeight(), 3);

  EXPECT_FLOAT_EQ(squareFloat->getWidth(), 4.4);
  EXPECT_FLOAT_EQ(squareFloat->getWidth(), 4.4);

  if (HasFailure()){
    cerr << "\nShapeSideTest has failed\"" << endl;
  }else {
    currentPoints_AttributeTests += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_AttributeTests << "/" << maxPoints << endl;
}