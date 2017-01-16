
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


int currentPoints_popTest = 0;
int maxPoints = 20;

TEST(hw2Test, popFromStackTest) {


    DLinkedStack<float> basicStack;
    basicStack.push(15.8);
    basicStack.push(12.2);
    basicStack.push(5.5);

    basicStack.pop();
    basicStack.pop();

    vector<float> vector1{15.8};
    vector<float> vector2 = basicStack.toVector();

    EXPECT_TRUE(equalVectors(vector1, vector2));

    basicStack.pop();

    EXPECT_FALSE(basicStack.pop());

    if(HasFailure()) {
        cerr << "\npopFromStackTest has failed" << endl;
    } else {
        currentPoints_popTest += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_popTest << "/" << maxPoints << endl;


}


TEST(hw2Test, popFromStackTest_Pointer) {


    DLinkedStack<int> basicStack;
    basicStack.push(30);
    basicStack.push(20);
    basicStack.push(10);

    basicStack.pop();

    EXPECT_EQ(20, basicStack.getTopPTR()->getItem());
    EXPECT_EQ(30, basicStack.getHeadPTR()->getItem());

    basicStack.pop();
    basicStack.pop();

    EXPECT_EQ(nullptr, basicStack.getTopPTR());
    EXPECT_EQ(nullptr, basicStack.getHeadPTR());

    if(HasFailure()) {
    cerr << "\npopFromStackTest has failed. **When a stack is empty, both top pointer and head pointer are nullptr." << endl;
    } else {
    currentPoints_popTest += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_popTest << "/" << maxPoints << endl;


}