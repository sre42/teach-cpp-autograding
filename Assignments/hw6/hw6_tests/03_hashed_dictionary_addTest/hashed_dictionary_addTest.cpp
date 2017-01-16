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

int currentPoints_addTest = 0;
int maxPoints = 20;


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

TEST(hw6HashedAddTest3, addDictionaryTest1) {
    DictionaryInterface<int, string> *dict1 = new HashedDictionary<int, string>();

    dict1->add(60, "F");
    dict1->add(70, "G");
    dict1->add(40, "D");
    dict1->add(80, "H");
    dict1->add(30, "C");
    dict1->add(50, "E");
    dict1->add(10, "A");
    dict1->add(20, "B");

    vector<string> v1 = dict1->toVector();
    vector<string> v2 = {"A", "B", "C", "D", "E", "F", "G", "H"};

    EXPECT_TRUE(equalVectors(v1, v2)) << "Vector returned from toVector is not correct";


    if (!HasFailure())currentPoints_addTest += 10;
    cout << "\nCurrent POINTS test3:" << currentPoints_addTest << "/" << maxPoints << endl;
}


TEST(hw6HashedAddTest3, addDictionaryTest2) {
    DictionaryInterface<int, string> *dict1 = new HashedDictionary<int, string>();


    dict1->add(10, "A");
    dict1->add(20, "B");
    dict1->add(121, "C");//Will get added at the same hash index as (20,B)


    vector<string> v1 = dict1->toVector();
    vector<string> v2 = {"A", "C", "B"};

    EXPECT_TRUE(equalVectors(v1, v2)) << "Are you adding new entries at the front of the list at the index?";


    if (!HasFailure())currentPoints_addTest += 10;
    cout << "\nCurrent POINTS test3:" << currentPoints_addTest << "/" << maxPoints << endl;
}
