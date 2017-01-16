//
// Created by Chohee Kim on 11/8/16.
//

#include "gtest/gtest.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

int currentPoints_constructorTest = 0;
int maxPoints = 30;

TEST(hw4TestCircle, basicConstructorCircle) {
  Circle<int> *circleInt = new Circle<int>(2, 2, 4);
  Circle<float> *circleFloat = new Circle<float>(4.4, 2.2, 4.4);

  if (HasFailure()){
    cerr << "\nCircleConstructorTest has failed\"" << endl;
  }else {
    currentPoints_constructorTest += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints_constructorTest << "/" << maxPoints << endl;

}

TEST(hw4TestRectangle, basicConstructorRectangle) {
  Rectangle<int> *rectangleInt = new Rectangle<int>(4, 4, 5, 6);
  Rectangle<float> *rectangleFloat = new Rectangle<float>(4.4, 4.4, 5.4, 6);


  if (HasFailure()){
    cerr << "\nRectangleConstructorTest has failed\"" << endl;
  }else {
    currentPoints_constructorTest += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints_constructorTest << "/" << maxPoints << endl;
}

TEST(hw4TestSquare, basicConstructorSquare) {
  Square<int> *squareInt = new Square<int>(3, 3, 3);
  Square<float> *squareFloat = new Square<float>(5.5, 3, 4.4);

  if (HasFailure()){
    cerr << "\nSquareConstructorTest has failed\"" << endl;
  }else {
    currentPoints_constructorTest += 10;
  }


  cout << "\nCurrent POINTS:" << currentPoints_constructorTest << "/" << maxPoints << endl;

}