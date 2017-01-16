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

int currentPoints_miscTest = 0;
int maxPoints = 50;

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

TEST(hw6HashedDictionaryTest, isEmptyTest) {
    DictionaryInterface<int, string> *dict1 = new HashedDictionary<int, string>();

    EXPECT_TRUE(dict1->isEmpty());

    dict1->add(60, "F");
    dict1->add(70, "G");
    dict1->add(40, "D");
    dict1->add(80, "H");
    dict1->add(30, "C");
    dict1->add(50, "E");
    dict1->add(10, "A");
    dict1->add(20, "B");

    EXPECT_FALSE(dict1->isEmpty());

    if (!HasFailure())currentPoints_miscTest += 10;
    cout << "\nCurrent POINTS test5:" << currentPoints_miscTest << "/" << maxPoints << endl;
}

TEST(hw6HashedDictionaryTest, getNumberItemsTest) {
    DictionaryInterface<int, string> *dict1 = new HashedDictionary<int, string>();

    EXPECT_EQ(dict1->getNumberOfItems(),0)<<"check your getNumberOfItems function";
    dict1->add(60, "F");
    dict1->add(70, "G");
    dict1->add(40, "D");
    dict1->add(80, "H");
    dict1->add(30, "C");
    dict1->add(50, "E");
    dict1->add(10, "A");
    dict1->add(20, "B");

    EXPECT_EQ(dict1->getNumberOfItems(),8)<<"Are your incrementing number of items in add()?";

    EXPECT_TRUE(dict1->remove(30));

    EXPECT_EQ(dict1->getNumberOfItems(),7)<<"Are your decrementing number of items in remove()";

    if (!HasFailure())currentPoints_miscTest += 10;
    cout << "\nCurrent POINTS test5:" << currentPoints_miscTest << "/" << maxPoints << endl;
}

TEST(hw6HashedDictionaryTest, getItemTest) {
    DictionaryInterface<int, string> *dict1 = new HashedDictionary<int, string>();

    dict1->add(60, "F");
    dict1->add(70, "G");
    dict1->add(40, "D");
    dict1->add(80, "H");
    dict1->add(30, "C");
    dict1->add(50, "E");
    dict1->add(10, "A");
    dict1->add(20, "B");
    string item;
    EXPECT_NO_THROW(item = dict1->getItem(50))<<"getItem is throwing an unecessary exception";

    EXPECT_EQ(item,"E")<<"getItem is incorrect";

    EXPECT_THROW(dict1->getItem(333),exception)<<"getItem should throw a default exception if item not found";

    if (!HasFailure())currentPoints_miscTest += 10;
    cout << "\nCurrent POINTS test5:" << currentPoints_miscTest << "/" << maxPoints << endl;
}

TEST(hw6HashedDictionaryTest, containsTest) {
    DictionaryInterface<int, string> *dict1 = new HashedDictionary<int, string>();

    dict1->add(60, "F");
    dict1->add(70, "G");
    dict1->add(40, "D");
    dict1->add(80, "H");
    dict1->add(30, "C");
    dict1->add(50, "E");
    dict1->add(10, "A");
    dict1->add(20, "B");


    EXPECT_TRUE(dict1->contains(30));
    EXPECT_FALSE(dict1->contains(333));

    if (!HasFailure())currentPoints_miscTest += 10;
    cout << "\nCurrent POINTS test5:" << currentPoints_miscTest << "/" << maxPoints << endl;
}

TEST(hw6HashedDictionaryTest, destroyTest) {
    DictionaryInterface<int, string> *dict1 = new HashedDictionary<int, string>();

    dict1->add(60, "F");
    dict1->add(70, "G");
    dict1->add(40, "D");
    dict1->add(80, "H");
    dict1->add(30, "C");
    dict1->add(50, "E");
    dict1->add(10, "A");
    dict1->add(20, "B");
    dict1->clear();

    EXPECT_EQ(dict1->getNumberOfItems(),0);
    EXPECT_FALSE(dict1->contains(30));
    EXPECT_FALSE(dict1->remove(30));
    EXPECT_THROW(dict1->getItem(50),exception);


    if (!HasFailure())currentPoints_miscTest += 10;
    cout << "\nCurrent POINTS test5:" << currentPoints_miscTest << "/" << maxPoints << endl;
}
