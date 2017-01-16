//
// Tests constructor, accessors, and mutators
//


#include "gtest/gtest.h"
#include "triangle.hpp"
#include <math.h>

using namespace std;

int currentPoints_basicTest = 0;
int maxPoints = 30;


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


TEST(hw1TriangleTest, basicConstructor) {
    Triangle<float> t1;

    if (HasFailure()) {
        cout << "Basic constructor test failing." << endl;
    }else {
        currentPoints_basicTest += 10;
    }
    cout << "\nCurrent POINTS Constructor Test:" << currentPoints_basicTest << "/" << maxPoints << endl;

}


TEST(hw1TriangleTest, basicAccessor) {

    Triangle<int> t1(4, 5, 6);
    Triangle<float> t2(4.5, 5.5, 6.5);
    Triangle<int> t3(2, 3, 400);

    vector<int> v1 = t1.getSides();
    vector<float> v2 = t2.getSides();
    vector<int> v3 = t3.getSides();

    vector<int> v1Comp{4, 5, 6};
    vector<float> v2Comp{4.5, 5.5, 6.5};
    vector<int> v3Comp{0, 0, 0};

    EXPECT_TRUE(equalVectors(v1, v1Comp)) << "Vector returned from toVector is not correct";
    EXPECT_TRUE(equalVectors(v2, v2Comp)) << "Vector returned from toVector is not correct";
    EXPECT_TRUE(equalVectors(v3, v3Comp)) << "Vector returned from toVector is not correct";


    if (!HasFailure()) {
        currentPoints_basicTest += 10;
    }
    cout << "\nCurrent POINTS Accessor Test:" << currentPoints_basicTest << "/" << maxPoints << endl;
}

TEST(hw1TriangleTest, basicMutator) {

    Triangle<int> t1;
    Triangle<float> t2;
    Triangle<double> t3;

    t1.setSides(4, 5, 6);
    t2.setSides(4.5, 5.5, 6.5);
    t3.setSides(10.5, 15.5, 6.5);

    vector<int> v1 = t1.getSides();
    vector<float> v2 = t2.getSides();
    vector<double> v3 = t3.getSides();

    vector<int> v1Comp{4, 5, 6};
    vector<float> v2Comp{4.5, 5.5, 6.5};
    vector<double> v3Comp{10.5, 15.5, 6.5};

    EXPECT_TRUE(equalVectors(v1, v1Comp)) << "Vector returned from toVector is not correct";
    EXPECT_TRUE(equalVectors(v2, v2Comp)) << "Vector returned from toVector is not correct";
    EXPECT_TRUE(equalVectors(v3, v3Comp)) << "Vector returned from toVector is not correct";

    if (!HasFailure()) {
        currentPoints_basicTest += 10;
    }
    cout << "\nCurrent POINTS Accessor Test:" << currentPoints_basicTest << "/" << maxPoints << endl;

}

