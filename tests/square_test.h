#ifndef SQUARE_H
#define SQUARE_H
#include <gtest/gtest.h>

extern "C" {
#include <stdio.h>
#include <math.h>
}

TEST(squareTest, suite1) {

    double a[2];

    ASSERT_EQ(square(1,4,9,a), 2);

}


TEST(squareTest, suite2) {

    double a[2];
    square(2,4,-48,a);
    ASSERT_EQ(square(2,4,-48,a), 2);
    ASSERT_EQ(a[0], 4);
    ASSERT_EQ(a[1], -6);
}



TEST(squareTest, suite3) {

    double a[2];
    square(1,4,4,a);
    ASSERT_EQ(square(1,4,4,a), 1);
    ASSERT_EQ(a[0], -2);
}




TEST(squareTest, suite4) {

    double a[2];
    ASSERT_EQ(square(0,0,0,a), 0);

}

TEST(squareTest, suite5) {

    double a[2];
    square(0,4,4,a);
    ASSERT_EQ(square(0,4,4,a), 1);
    ASSERT_EQ(a[0], -1);

}



#endif // SQUARE_H
