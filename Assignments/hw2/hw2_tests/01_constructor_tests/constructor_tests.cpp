


#include "gtest/gtest.h"
#include "DLinkedStack.hpp"

using namespace std;


TEST(hw2Test, basicConstructorTest) {

    DLinkedStack<int> basicStack;

    if (HasFailure()) { cerr << "\nbasicConstructorTest has failed" << endl; } else{
        cerr << "\nbasicConstructorTest has passed" << endl;
    }

}

TEST(hw2Test, ConstructorTest) {

    DLinkedStack<float> basicStack;

    if (HasFailure()) { cerr << "\nConstructorTest has failed" << endl; } else {
        cerr << "\nConstructorTest has passed" << endl;
    }

}