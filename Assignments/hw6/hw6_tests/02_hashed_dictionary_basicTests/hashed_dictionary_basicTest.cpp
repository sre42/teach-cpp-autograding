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

TEST(hw6HashedDictionaryTest, basicDictionaryTest) {
    DictionaryInterface<int, string> *dict1 = new HashedDictionary<int, string>();

    if (HasFailure())cout<<"Basic Constructor is failing";

}

