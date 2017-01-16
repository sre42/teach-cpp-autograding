#include "gtest/gtest.h"


TEST(basic_check_test_eq_Test, test_eq){
    EXPECT_EQ(1, 1);
}

TEST(basic_check_test_neq_Test, test_neq) {
    EXPECT_NE(1, 2);
}