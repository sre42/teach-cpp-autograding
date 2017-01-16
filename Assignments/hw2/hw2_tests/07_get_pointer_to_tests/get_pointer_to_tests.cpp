
#include "DLinkedStack.hpp"
#include "gtest/gtest.h"

using namespace std;

int currentPoints_pointerTest = 0;
int maxPoints = 30;

TEST(hw2Test, headTest) {

    DLinkedStack<int> basicStack;
    basicStack.push(44);
    basicStack.push(88);
    basicStack.push(66);
    basicStack.push(88);
    basicStack.push(88);
    basicStack.pop();
    EXPECT_FALSE(basicStack.isEmpty());

    Node<int> *head = basicStack.getHeadPTR();
    Node<int> *node = basicStack.getPointerTo(44);

    ASSERT_NE(node, nullptr);

    EXPECT_EQ(node->getPrev(), nullptr);
    EXPECT_EQ(node, head);

    if (HasFailure()) {
        cerr << "\nheadTest has failed" << endl;
    }
    else {
        currentPoints_pointerTest += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_pointerTest << "/" << maxPoints << endl;


}

TEST(hw2Test, topTest) {

    DLinkedStack<int> basicStack;
    basicStack.push(44);
    basicStack.push(88);
    basicStack.push(66);
    basicStack.push(88);
    basicStack.push(99);
    basicStack.push(999);
    EXPECT_FALSE(basicStack.isEmpty());

    Node<int> *top = basicStack.getTopPTR();
    Node<int> *node = basicStack.getPointerTo(999);

    ASSERT_NE(node, nullptr);

    EXPECT_EQ(node->getNext(), nullptr);

    EXPECT_EQ(node, top);

    if (HasFailure()) {
        cerr << "\ntopTest has failed" << endl;
    }
    else {
        currentPoints_pointerTest += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_pointerTest << "/" << maxPoints << endl;

}

TEST(hw2Test, midTest) {

    DLinkedStack<int> basicStack;
    basicStack.push(44);
    basicStack.push(88);
    basicStack.push(55);
    basicStack.push(66);
    basicStack.push(77);
    basicStack.push(88);
    basicStack.push(99);
    basicStack.push(999);


    EXPECT_FALSE(basicStack.isEmpty());

    Node<int> *node = basicStack.getPointerTo(55);
    Node<int> *node2 = basicStack.getPointerTo(66);
    Node<int> *node3 = basicStack.getPointerTo(77);

    ASSERT_NE(node, nullptr);
    ASSERT_NE(node2, nullptr);
    ASSERT_NE(node3, nullptr);


    EXPECT_EQ(node->getNext(), node2);
    EXPECT_EQ(node2->getNext(), node3);
    EXPECT_EQ(node2->getPrev(), node);
    EXPECT_EQ(node3->getPrev(), node2);

    if (HasFailure()) {
        cerr << "\nmidTest has failed" << endl;
    } else {
        currentPoints_pointerTest += 10;
    }

    cout << "\nCurrent POINTS:" << currentPoints_pointerTest << "/" << maxPoints << endl;


}