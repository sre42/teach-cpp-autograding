
#include "DLinkedStack.hpp"
#include "gtest/gtest.h"
#include <cmath>

using namespace std;

template<class T>
bool equalVectors(vector<T> a, vector<T> b) {

    float epsilon = 0.01;
    a.shrink_to_fit();
    b.shrink_to_fit();
    if (a.size() != b.size()) return false;
    else {
        for (int i = 0; i < a.size(); i++) {
            if (std::abs(a[i] - b[i]) > epsilon ) return false;
        }

    }
    return true;
}


int currentPoints_pushTest = 0;
int maxPoints = 20;

TEST(hw2Test, addToStackTest) {

    DLinkedStack<float> basicStack;
    basicStack.push(3.3);
    basicStack.push(2.2);
    basicStack.push(1.1);

    vector<float> vector1 = basicStack.toVector();
    vector<float> vector2{1.1, 2.2, 3.3};

    EXPECT_TRUE(equalVectors(vector1, vector2));


    if(HasFailure()) {
        cerr << "\naddToStackTest has failed" << endl;
    } else {
        currentPoints_pushTest += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_pushTest << "/" << maxPoints << endl;

}

TEST(hw2Test, addToStackTest_Pointer) {

    DLinkedStack<int> basicStack;
    basicStack.push(30);
    basicStack.push(20);
    basicStack.push(10);

    vector<int> vector1 = basicStack.toVector();
    vector<int> vector2{10, 20, 30};

    EXPECT_EQ(30, basicStack.getHeadPTR()->getItem());
    EXPECT_EQ(10, basicStack.getTopPTR()->getItem());


    if(HasFailure()) {
        cerr << "\naddToStackTest has failed. Check the head-pointer and the top-pointer" << endl;
    } else {
        currentPoints_pushTest += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_pushTest << "/" << maxPoints << endl;

}