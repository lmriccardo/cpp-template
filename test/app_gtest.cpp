#include <gtest/gtest.h>
#include <app.hpp>

TEST(SimpleSum, SimpleSum) {
    EXPECT_EQ(5, add(2, 3));
}