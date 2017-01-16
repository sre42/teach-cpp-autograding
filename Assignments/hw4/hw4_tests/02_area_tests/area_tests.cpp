//
// Created by Chohee Kim on 11/8/16.
//

#include "gtest/gtest.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

int currentPoints_areaTests = 0;
int maxPoints = 30;


TEST(hw4TestCircle, circleAreaTest) {

  Circle<int> *circleInt = new Circle<int>(2, 2, 4);
  Circle<float> *circleFloat = new Circle<float>(4.4, 2.2, 4.4);

  EXPECT_FLOAT_EQ(circleInt->area(), 50.24);
  EXPECT_FLOAT_EQ(circleFloat->area(), 60.7904);

  if (HasFailure()){
    cerr << "\nCircleAreaTest has failed\"" << endl;
  }else {
    currentPoints_areaTests += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_areaTests << "/" << maxPoints << endl;

}

TEST(hw4TestRectangle, rectangleAreaTest) {

  Rectangle<int> *rectangleInt = new Rectangle<int>(4, 4, 5, 6);
  Rectangle<float> *rectangleFloat = new Rectangle<float>(4.4, 4.4, 5.4, 6);

  EXPECT_FLOAT_EQ(rectangleInt->area(), 30);
  EXPECT_FLOAT_EQ(rectangleFloat->area(), 32.4);

  if (HasFailure()){
    cerr << "\nRectangleAreaTest has failed\"" << endl;
  }else {
    currentPoints_areaTests += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_areaTests << "/" << maxPoints << endl;

}

TEST(hw4TestSquare, squareAreaTest) {

  Square<int> *squareInt = new Square<int>(3, 3, 3);
  Square<float> *squareFloat = new Square<float>(5.5, 3, 4.4);

  EXPECT_FLOAT_EQ(squareInt->area(), 9);
  EXPECT_FLOAT_EQ(squareFloat->area(), 19.36);


  if (HasFailure()){
    cerr << "\nSquareAreaTest has failed\"" << endl;
  }else {
    currentPoints_areaTests += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_areaTests << "/" << maxPoints << endl;

}