
#include "DLinkedStack.hpp"
#include "gtest/gtest.h"

using namespace std;


int currentPoints_isEmptyTest = 0;
int maxPoints = 10;

TEST(hw2Test, emptyTest) {

    DLinkedStack<int> basicStack;

    EXPECT_TRUE(basicStack.isEmpty());
    basicStack.push(44);
    basicStack.push(88);

    EXPECT_FALSE(basicStack.isEmpty());


    if (HasFailure()) {
        cerr << "\nemptyTest has failed" << endl;
    } else {
        currentPoints_isEmptyTest += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_isEmptyTest << "/" << maxPoints << endl;
}