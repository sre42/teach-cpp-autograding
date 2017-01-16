

#include "DLinkedStack.hpp"
#include "gtest/gtest.h"

using namespace std;

template<class T>
bool equalVectors(vector<T> a, vector<T> b) {
    a.shrink_to_fit();
    b.shrink_to_fit();
    if (a.size() != b.size()) return false;
    else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) return false;
        }

    }
    return true;
}

int currentPoints_copyTest = 0;
int maxPoints = 10;


TEST(hw2Test, copyConstructorTest) {

    DLinkedStack<int> basicStack;
    basicStack.push(88);
    basicStack.push(44);
    vector<int> vector1 = basicStack.toVector();
    vector<int> vector2{44, 88};
    EXPECT_TRUE(equalVectors(vector1, vector2));

    DLinkedStack<int> basicStack2 = basicStack;

    vector<int> vector3 = basicStack2.toVector();
    EXPECT_TRUE(equalVectors(vector1, vector3));


    if (HasFailure()) {
        cerr << "\ncopyConstructorTest has failed" << endl;
    } else {
        currentPoints_copyTest += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_copyTest << "/" << maxPoints << endl;

}