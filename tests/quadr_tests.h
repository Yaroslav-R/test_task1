#ifndef QUADR_H
#define QUADR_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>

extern "C" {
#include "myfunc.h"
}

// float x1, x2;
// int flag;

// TEST(root, num1)
// {
//     quadr(2, -6, 4, &x1, &x2, &flag);
//     ASSERT_FLOAT_EQ(2, x1);
//     ASSERT_FLOAT_EQ(1, x2);
//     ASSERT_EQ(0, flag);
// }

// TEST(root, num2)
// {
//     quadr(1, -4, 3, &x1, &x2, &flag);
//     ASSERT_FLOAT_EQ(3, x1);
//     ASSERT_FLOAT_EQ(1, x2);
//     ASSERT_EQ(0, flag);
// }

// TEST(pointroots, num1)
// {
//     quadr(2, -9, 7, &x1, &x2, &flag);
//     ASSERT_FLOAT_EQ(3.5, x1);
//     ASSERT_FLOAT_EQ(1, x2);
//     ASSERT_EQ(0, flag);
// }

// TEST(pointroots, num2)
// {
//     quadr(2, 3, 1, &x1, &x2, &flag);
//     ASSERT_FLOAT_EQ(-0.5, x1);
//     ASSERT_FLOAT_EQ(-1, x2);
//     ASSERT_EQ(0, flag);
// }

// TEST(zero_dis, num1)
// {
//     quadr(2, 4, 2, &x1, &x2, &flag);
//     ASSERT_FLOAT_EQ(-1, x1);
//     ASSERT_FLOAT_EQ(-1, x2);
//     ASSERT_EQ(0, flag);
// }

// TEST(zero_dis, num2)
// {
//     quadr(4.5, 6 , 2, &x1, &x2, &flag);
//     ASSERT_FLOAT_EQ(-0.66666669, x1);
//     ASSERT_FLOAT_EQ(-0.66666669, x2);
//     ASSERT_EQ(0, flag);
// }

// TEST(noroots, num1)
// {
//     quadr(2, 6, 14, &x1, &x2, &flag);
//     ASSERT_EQ(1, flag);
// }

// TEST(noroots, num2)
// {
//     quadr(-10, -13, -25, &x1, &x2, &flag);
//     ASSERT_EQ(1, flag);
// }

// TEST(zero_coeff, num1)
// {
//     quadr(0, 0, 0, &x1, &x2, &flag);
//     ASSERT_EQ(1, flag);
// }
TEST(intRoot, suite1) {
    int cur  = 2;
    float a  = 1;
    float b  = -5;
    float c  = 4;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(intRoot, suite2) {
    int cur  = 2;
    float a  = -1;
    float b  = 9;
    float c  = -8;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(fracRoot, suite1) {
    int cur  = 2;
    float a  = -7;
    float b  = 13;
    float c  = 5;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(fracRoot, suite2) {
    int cur  = 2;
    float a  = 5;
    float b  = -11;
    float c  = 3;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(disk0, suite1) {
    int cur  = 1;
    float a  = 1;
    float b  = 2;
    float c  = 1;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(disk0, suite2) {
    int cur  = 1;
    float a  = 2;
    float b  = -6;
    float c  = 4.5;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(noRoot, suite1) {
    int cur  = 0;
    float a  = 1;
    float b  = -6;
    float c  = 10;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(noRoot, suite2) {
    int cur  = 0;
    float a  = -7;
    float b  = 13;
    float c  = -15;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(bxc, suite1) {
    int cur  = 1;
    float a  = 0;
    float b  = 2;
    float c  = 8;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(bxc, suite2) {
    int cur  = 1;
    float a  = 0;
    float b  = 1;
    float c  = 4.5;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(c, suite1) {
    int cur  = 0;
    float a  = 0;
    float b  = 0;
    float c  = 2;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(c, suite2) {
    int cur  = 3;
    float a  = 0;
    float b  = 0;
    float c  = 0;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || cur == 3 || 
        (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
}
#endif // QUADR_H
