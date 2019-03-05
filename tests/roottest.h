#ifndef ROOTTEST_H
#define ROOTTEST_H

#include <gtest/gtest.h>

extern "C" {
#include "root.h"
}

/*
TEST(rootTest, num0) {
    double *a=roots(0, 0, 0);
    ASSERT_EQ(a[0], a[1]);
    ASSERT_EQ(a[1], nullptr);
}
*/

TEST(rootTest, positive) {
    double *a=roots(1, 2, 1);
    ASSERT_EQ(a[0], -1);
    ASSERT_EQ(a[1], -1);
}

TEST(rootTest, negative) {
    double *a=roots(-1, -2, -1);
    ASSERT_EQ(a[0], -1);
    ASSERT_EQ(a[1], -1);
}

#endif // ROOTTEST_H
