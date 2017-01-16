//
// Created by Chohee Kim on 7/27/16.
//

#include "gtest/gtest.h"
#include "triangle.hpp"

using namespace std;

int currentPoints_invalidInputTests = 0;
int maxPoints = 10;

template<class T>
bool equalVectors(vector<T> a, vector<T> b) {
    a.shrink_to_fit();
    b.shrink_to_fit();
    if (a.size() != b.size()){
        return false;
    }else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) return false;
        }

    }
    return true;
}

TEST(hw1TriangleTest, basicInvalidTriangleTest) {

    Triangle<int> t1;
    Triangle<float> t2;
    Triangle<double> t3;

    t1.setSides(2, 5, 1000);
    t2.setSides(4.5, 16.9, 6.5);
    t3.setSides(1.2, -1.2, 300);

    vector<int> v1 = t1.getSides();
    vector<float> v2 = t2.getSides();
    vector<double> v3 = t3.getSides();

    vector<int> v1Comp{0, 0, 0};
    vector<float> v2Comp{0, 0, 0};
    vector<double> v3Comp{0, 0, 0};

    EXPECT_TRUE(equalVectors(v1, v1Comp)) << "Vector returned from toVector is not correct";
    EXPECT_TRUE(equalVectors(v2, v2Comp)) << "Vector returned from toVector is not correct";
    EXPECT_TRUE(equalVectors(v3, v3Comp)) << "Vector returned from toVector is not correct";

    if (!HasFailure())
        currentPoints_invalidInputTests += 10;


    cout << "\nCurrent POINTS Invalid Triangle Check Test:" << currentPoints_invalidInputTests << "/" << maxPoints << endl;

}