//
// Created by Chohee Kim on 7/26/16.
//

#include "gtest/gtest.h"
#include "triangle.hpp"

using namespace std;

int currentPoints_areaTest = 0;
int maxPoints = 20;


TEST(hw1TriangleTest, simpleAreaTest){

    Triangle<int> t1(3, 4, 5);
    EXPECT_EQ(t1.getArea(), 6);


    if (!HasFailure()) {
        currentPoints_areaTest += 10;
    }
    cout << "\nCurrent POINTS Simple Area Test:" << currentPoints_areaTest << "/" << maxPoints << endl;
}

TEST(hw1TriangleTest, generalizedAreaTest) {

    Triangle<float> t1(4.5, 5.5, 6.5);
    EXPECT_EQ((double) std::trunc(1000 * t1.getArea()) / 1000, (double) std::trunc(1000 * 12.2019) / 1000)
    << "Area is not correct";

    //TODO - change to more complicated number
    Triangle<double> t2(4.5, 5.5, 6.5);
    EXPECT_EQ((double) std::trunc(1000 * t2.getArea()) / 1000, (double) std::trunc(1000 * 12.2019) / 1000)
    << "Area is not correct";

    if (!HasFailure()) { currentPoints_areaTest += 10; }
    cout << "\nCurrent POINTS Generalized Area Test:" << currentPoints_areaTest << "/" << maxPoints << endl;

}
