//
// Created by Chohee Kim on 7/26/16.
//

#include "gtest/gtest.h"
#include "triangle.hpp"

using namespace std;

int currentPoints_perimeterTests = 0;
int maxPoints = 10;


TEST(hw1TriangleTest, TrianglePerimeterTest) {

    Triangle<int> t1(4, 5, 6);
    Triangle<float> t2(4.5, 5.5, 6.5);

    EXPECT_EQ(t1.getPerimeter(), 15 ) << "Integer triangle perimeter test is failing";
    EXPECT_EQ(t2.getPerimeter(), 16.5 )<< "Float triangle perimeter test is failing";

    if(!HasFailure()) {
        currentPoints_perimeterTests +=10;
    }

    cout << "\nCurrent POINTS Triangle Perimeter Check Test:" << currentPoints_perimeterTests << "/" << maxPoints << endl;

}
