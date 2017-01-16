//
// Created by Chohee Kim on 11/8/16.
//

#include "gtest/gtest.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "CustomException.h"

using namespace std;


int currentPoints_ExceptionTests = 0;
int maxPoints = 30;

TEST(hw4TestCircle, circleExceptionTest) {

    EXPECT_THROW(Circle<int> *circleInt = new Circle<int>(2, 2, -4), CustomException);
    EXPECT_THROW(Circle<float> *circleFloat = new Circle<float>(4.4, 2.2, -4.4), CustomException);

    try {
        Circle<int> *circleInt = new Circle<int>(2, 2, -4);
    } catch (CustomException &CE) {
        EXPECT_EQ(CE.getErrorCode(), 22);
    } catch (exception &e) {
        FAIL();
        cout << "DEFAULT EXCEPTION, THIS SHOULD NOT HAPPEN " << e.what();
    }

    try {
        Circle<float> *circleFloat = new Circle<float>(4.4, 2.2, -4.4);
    } catch (CustomException &CE) {
        EXPECT_EQ(CE.getErrorCode(), 22);
    } catch (exception &e) {
        FAIL();
        cout << "DEFAULT EXCEPTION, THIS SHOULD NOT HAPPEN " << e.what();
    }

    if (HasFailure()){
        cerr << "\nCircleExceptionTest has failed\"" << endl;
    }else {
        currentPoints_ExceptionTests += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_ExceptionTests << "/" << maxPoints << endl;
}

TEST(hw4TestRectangle, rectangleExceptionTest) {

    EXPECT_THROW(Rectangle<int> *rectangleInt = new Rectangle<int>(4, 4, 5, -6), CustomException);
    EXPECT_THROW(Rectangle<float> *rectangleFloat = new Rectangle<float>(4.4, 4.4, -5.4, 6), CustomException);

    try {
        Rectangle<int> *rectangleInt = new Rectangle<int>(4, 4, 5, -6);
    } catch (CustomException &CE) {
        EXPECT_EQ(CE.getErrorCode(), 33);
    } catch (exception &e) {
        FAIL();
        cout << "DEFAULT EXCEPTION, THIS SHOULD NOT HAPPEN " << e.what();
    }
    try {
        Rectangle<float> *rectangleFloat = new Rectangle<float>(4.4, 4.4, -5.4, 6);
    } catch (CustomException &CE) {
        EXPECT_EQ(CE.getErrorCode(), 33);
    } catch (exception &e) {
        FAIL();
        cout << "DEFAULT EXCEPTION, THIS SHOULD NOT HAPPEN " << e.what();
    }

    if (HasFailure()){
        cerr << "\nRectangleExceptionTest has failed\"" << endl;
    }else {
        currentPoints_ExceptionTests += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_ExceptionTests << "/" << maxPoints << endl;
}

TEST(hw4TestSquare, squareExceptionTest) {


    EXPECT_THROW(Square<int> *squareInt = new Square<int>(3, 3, -3), CustomException);
    EXPECT_THROW(Square<float> *squareFloat = new Square<float>(5.5, 3, -4.4), CustomException);

    try {
        Square<int> *squareInt = new Square<int>(3, 3, -3);
    } catch (CustomException &CE) {
        EXPECT_EQ(CE.getErrorCode(), 33);
    } catch (exception &e) {
        FAIL();
        cout << "DEFAULT EXCEPTION, THIS SHOULD NOT HAPPEN " << e.what();
    }
    try {
        Square<float> *squareFloat = new Square<float>(5.5, 3, -4.4);
    } catch (CustomException &CE) {
        EXPECT_EQ(CE.getErrorCode(), 33);
    } catch (exception &e) {
        FAIL();
        cout << "DEFAULT EXCEPTION, THIS SHOULD NOT HAPPEN " << e.what();
    }


    if (HasFailure()){
        cerr << "\nSquareExceptionTest has failed\"" << endl;
    }else {
        currentPoints_ExceptionTests += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_ExceptionTests << "/" << maxPoints << endl;
}