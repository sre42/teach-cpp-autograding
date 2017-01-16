//
// Created by Omar Shaikh on 2/8/16.
//

#include "gtest/gtest.h"

TEST(basic_check, test_eq) {
    EXPECT_EQ(2, 2);
}

TEST(basic_check, test_neq) {
    EXPECT_NE(1, 0);

}

TEST(basic_check, misc) {
    EXPECT_GT(1, 0);
}
