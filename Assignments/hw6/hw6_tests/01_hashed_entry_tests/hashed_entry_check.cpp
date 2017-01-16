#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <cmath>
#include "gtest/gtest.h"
#include <exception>
#include<iostream>

#include "HashedEntry.h"

using namespace std;

int currentPoints_test1 = 0;
int maxPoints = 30;

TEST(hw6HashedEntryTest, basicHashedEntryTest) {

    HashedEntry<int, string> he1(1, "data1");
    HashedEntry<int, string> he2(2, "data2");

    EXPECT_EQ(he1.getItem(), "data1") << "Check your constructors";
    EXPECT_EQ(he2.getItem(), "data2") << "Check your constructors";
    EXPECT_EQ(he1.getNext(), nullptr) << "Check your constructors";

    if (!HasFailure())currentPoints_test1 += 10;
    cout << "\nCurrent POINTS test1:" << currentPoints_test1 << "/" << maxPoints << endl;
}

TEST(hw6HashedEntryTest, basicHashedEntryTest2) {

    HashedEntry<int, string> he1(1, "data1");
    HashedEntry<int, string> he2(2, "data2");
    HashedEntry<int, string> he3(3, "data3", &he2);


    EXPECT_EQ(he1.getItem(), "data1") << "Check your constructors";
    EXPECT_EQ(he2.getItem(), "data2") << "Check your constructors";
    EXPECT_EQ(he2.getItem(), he3.getNext()->getItem()) << "Check your constructors";


    if (!HasFailure())currentPoints_test1 += 10;
    cout << "\nCurrent POINTS test1:" << currentPoints_test1 << "/" << maxPoints << endl;
}

TEST(hw6HashedEntryTest, basicHashedEntryTest3) {

    HashedEntry<int, string> he1(1, "data1");
    HashedEntry<int, string> he2(2, "data2");
    HashedEntry<int, string> he3(3, "data3", &he2);


    EXPECT_EQ(he1.getItem(), "data1");
    EXPECT_EQ(he2.getItem(), "data2");
    EXPECT_EQ(he2.getItem(), he3.getNext()->getItem());
    EXPECT_EQ(nullptr, he3.getNext()->getNext());


    he1.setItem("newItem");
    EXPECT_EQ(he1.getItem(), "newItem") << "check your setItem function";

    he1.setNext(&he2);
    EXPECT_EQ(he2.getItem(), he1.getNext()->getItem()) << "Check your setNext function";
    EXPECT_EQ(nullptr, he1.getNext()->getNext());

    he2 = "overloadedItem";
    EXPECT_EQ(he2.getItem(), "overloadedItem") << "Overloaded operator is failing, check your setNext function";

    if (!HasFailure())currentPoints_test1 += 10;
    cout << "\nCurrent POINTS test1:" << currentPoints_test1 << "/" << maxPoints << endl;
}