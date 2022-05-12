#ifndef QUADR_H
#define QUADR_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>

extern "C" {
#include "myfunc.h"
}


TEST(intRoot, suite1) {
    int cur  = 2;
    float a  = 2;
    float b  = -6;
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
    float a  = 1;
    float b  = -4;
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

TEST(fracRoot, suite1) {
    int cur  = 2;
    float a  = 2;
    float b  = -9;
    float c  = 7;
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
    float a  = 2;
    float b  = 3;
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

TEST(disk0, suite1) {
    int cur  = 1;
    float a  = 2;
    float b  = 4;
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

TEST(disk0, suite2) {
    int cur  = 1;
    float a  = 4.5;
    float b  = 6;
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

TEST(noRoot, suite1) {
    int cur  = 0;
    float a  = 2;
    float b  = 6;
    float c  = 14;
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
    float a  = -10;
    float b  = -13;
    float c  = -25;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(nullCoeff, suite1) {
    int cur  = 3;
    float a  = 0;
    float b  = 0;
    float c  = 0;
    float x1 = 0;
    float x2 = 0;

    int cnt = solve(a, b, c, &x1, &x2);

    if (cnt == cur &&
        (cur == 0 || (check(a, b, c, x1) && check(a, b, c, x2)) ) )
        SUCCEED();
    else
        FAIL();
} 

TEST(nullCoeff, suite2) {
    int cur  = 1;
    float a  = 0;
    float b  = 1;
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

TEST(nullCoeff, suite3) {
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

#endif // QUADR_H
