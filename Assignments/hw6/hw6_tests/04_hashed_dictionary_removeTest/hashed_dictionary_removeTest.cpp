#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <cmath>
#include "gtest/gtest.h"
#include <exception>
#include<iostream>

#include "HashedEntry.h"
#include "DictionaryInterface.h"
#include "HashedDictionary.h"

using namespace std;

int currentPoints_removeTest = 0;
int maxPoints = 30;

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

TEST(hw6HashedDictionaryTest, basicRemoveTest) {
    DictionaryInterface<int, string> *dict1 = new HashedDictionary<int, string>();

    dict1->add(60, "F");
    dict1->add(70, "G");
    dict1->add(40, "D");
    dict1->add(80, "H");
    dict1->add(30, "C");
    dict1->add(50, "E");
    dict1->add(10, "A");
    dict1->add(20, "B");
    EXPECT_TRUE(dict1->remove(30)) << "Remove function is failing";

    vector<string> v1 = dict1->toVector();
    vector<string> v2 = {"A", "B", "D", "E", "F", "G", "H"};

    EXPECT_TRUE(equalVectors(v1, v2)) << "Vectors after remove are not equal";

    if (!HasFailure())currentPoints_removeTest += 10;
    cout << "\nCurrent POINTS test4:" << currentPoints_removeTest << "/" << maxPoints << endl;
}

TEST(hw6HashedDictionaryTest, basicRemoveTest2) {
    DictionaryInterface<int, string> *dict1 = new HashedDictionary<int, string>();

    EXPECT_FALSE(dict1->remove(30)) << "Remove function is incorrect";


    if (!HasFailure())currentPoints_removeTest += 10;
    cout << "\nCurrent POINTS test4:" << currentPoints_removeTest << "/" << maxPoints << endl;
}

TEST(hw6HashedDictionaryTest, basicRemoveTest3) {
    DictionaryInterface<int, string> *dict1 = new HashedDictionary<int, string>();

    dict1->add(10, "A");
    dict1->add(20, "B");
    dict1->add(121, "C");//Will get added at the same hash index as (20,B)
    EXPECT_TRUE(dict1->remove(20)) << "Remove function is failing";

    vector<string> v1 = dict1->toVector();
    vector<string> v2 = {"A", "C"};

    EXPECT_TRUE(equalVectors(v1, v2)) << "Vectors after remove are not equal";

    dict1->add(20, "B");

    v1 = dict1->toVector();

    v2 = {"A", "B", "C"};
    EXPECT_TRUE(equalVectors(v1, v2)) << "Vectors after remove are not equal";


    if (!HasFailure())currentPoints_removeTest += 10;
    cout << "\nCurrent POINTS test4:" << currentPoints_removeTest << "/" << maxPoints << endl;
}

