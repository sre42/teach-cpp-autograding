

#include "gtest/gtest.h"
#include <math.h>
#include <memory>
#include "SortedDoublyLinkedList.hpp"

using namespace std;

int currentPoints_removeTest = 0;
int maxPoints = 5;

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


TEST(hw3Test, removeTest) {

    SortedDoublyLinkedList<int> basicList;
    basicList.add(44);
    basicList.add(88);
    basicList.add(55);
    basicList.add(22);
    basicList.add(11);

    basicList.remove(88);

    vector<int> vector1 = basicList.toVector();
    vector<int> vector2{11, 22, 44, 55};

    EXPECT_FALSE(basicList.isEmpty());
    EXPECT_TRUE(equalVectors(vector1, vector2));

    basicList.remove(22);

    vector<int> vector3 = basicList.toVector();
    vector<int> vector4{11, 44, 55};

    EXPECT_FALSE(basicList.isEmpty());
    EXPECT_TRUE(equalVectors(vector3, vector4));

    basicList.remove(11);

    vector<int> vector5 = basicList.toVector();
    vector<int> vector6{44, 55};

    EXPECT_FALSE(basicList.isEmpty());
    EXPECT_TRUE(equalVectors(vector5, vector6));

    basicList.remove(44);
    basicList.remove(55);

    EXPECT_TRUE(basicList.isEmpty());

    if(HasFailure()) {
      cerr << "\nremoveTest has failed\"" << endl;
    } else {
      currentPoints_removeTest += 5;
    }

    cout << "\nCurrent POINTS:" << currentPoints_removeTest << "/" << maxPoints << endl;

}