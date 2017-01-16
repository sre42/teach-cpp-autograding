//
// Created by Chohee Kim on 7/26/16.
// check isRightTriangle(), isIsoscelesTriangle(), and isEquilateralTriangle()
//

#include "gtest/gtest.h"
#include "triangle.hpp"

using namespace std;

int currentPoints_triangleCheck = 0;
int maxPoints = 30;

TEST(hw1TriangleTest, rightTriangleTest){

    Triangle<int> t1(5, 5, 5);
    Triangle<int> t2(3, 4, 5);
    Triangle<float> t3(4.5, 4.5, 4.5);
    Triangle<float> t4(3.0, 4.0, 5.0);

    EXPECT_FALSE(t1.isRightTriangle());
    EXPECT_TRUE(t2.isRightTriangle());
    EXPECT_FALSE(t3.isRightTriangle());
    EXPECT_TRUE(t4.isRightTriangle());


    if(!HasFailure())
        currentPoints_triangleCheck += 10;

    cout << "\nCurrent POINTS Triangles Check Test:" << currentPoints_triangleCheck << "/" << maxPoints << endl;

}

TEST(hw1Test, isoscelesTriangleTest) {

    Triangle<int> t1(4, 5, 6);
    Triangle<int> t2(11, 11, 6);
    Triangle<float> t3(5.5, 6.7, 5.5);

    EXPECT_FALSE(t1.isIsosceles());
    EXPECT_TRUE(t2.isIsosceles());
    EXPECT_TRUE(t3.isIsosceles());

    if (!HasFailure())
        currentPoints_triangleCheck +=10;

    cout << "\nCurrent POINTS Triangles Check Test:" << currentPoints_triangleCheck << "/" << maxPoints << endl;

}

TEST(hw1TriangleTest, equilateralTriangleTest){

    Triangle<int> t1(5, 8, 5);
    Triangle<int> t2(4, 4, 4);
    Triangle<float> t3(4.5, 4.5, 4.5);
    Triangle<float> t4(4.5, 7.5, 4.5);

    EXPECT_FALSE(t1.isEquilateral());
    EXPECT_TRUE(t2.isEquilateral());
    EXPECT_TRUE(t3.isEquilateral());
    EXPECT_FALSE(t4.isEquilateral());

    if(!HasFailure())
        currentPoints_triangleCheck += 10;

    cout << "\nCurrent POINTS Triangles Check Test:" << currentPoints_triangleCheck << "/" << maxPoints << endl;

}