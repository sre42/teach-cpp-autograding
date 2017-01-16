
#include "DLinkedStack.hpp"
#include "gtest/gtest.h"
#include <cmath>

using namespace std;

bool equalValues(float a, float b) {

    float epsilon = 0.01;

    if(std::abs(a - b) > epsilon ) return false;

    return true;
}


int currentPoints_peekTest = 0;
int maxPoints = 10;

TEST(hw2Test, peekTest) {

    DLinkedStack<float> basicStack;

    basicStack.push(20.5);
    basicStack.push(15.7);
    basicStack.push(2.11);

    Node<float> *test_node = basicStack.getTopPTR();
    float test_value = basicStack.peek();

    EXPECT_TRUE(equalValues(2.11, test_value));
    EXPECT_TRUE(equalValues(test_node->getItem(), basicStack.getTopPTR()->getItem()));


    if(HasFailure()) {
        cerr << "\nPeekFromStackTest has failed" << endl;
    } else {
        currentPoints_peekTest += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_peekTest << "/" << maxPoints << endl;


}
