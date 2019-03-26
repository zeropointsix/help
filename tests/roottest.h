#ifndef ROOTTEST_H
#define ROOTTEST_H

#include <gtest/gtest.h>

extern "C" {
#include "root.h"
}

TEST(rootTest, positive_numbers) {
    double *a=roots(1, 2, 1);
    ASSERT_EQ(a[0], 1);
    ASSERT_EQ(a[1], -1);
    ASSERT_EQ(a[2], -1);
}

TEST(rootTest, negative_numbers) {
    double *a=roots(-1, -2, -1);
    ASSERT_EQ(a[0], 1);
    ASSERT_EQ(a[1], -1);
    ASSERT_EQ(a[2], -1);
}

TEST(rootTest, mixed_numbers_1) {
    double *a=roots(1, -2, 1);
    ASSERT_EQ(a[0], 1);
    ASSERT_EQ(a[1], 1);
    ASSERT_EQ(a[2], 1);
}

TEST(rootTest, mixed_numbers_2) {
    double *a=roots(-1, 2, -1);
    ASSERT_EQ(a[0], 1);
    ASSERT_EQ(a[1], 1);
    ASSERT_EQ(a[2], 1);
}

TEST(rootTest, D_lessthan_0) {
    double *a=roots(1, 2, 2);
    ASSERT_EQ(a[0], 0);
}

TEST(rootTest, D_morethan_0) {
    double *a=roots(-1, 3, -1);
    ASSERT_EQ(a[0], 2);
}

TEST(rootTest, a_eq_0) {
    double *a=roots(0, 1, 1);
    ASSERT_EQ(a[0], 1);
    ASSERT_EQ(a[1], -1);
    ASSERT_EQ(a[2], -1);
}

#endif // ROOTTEST_H
