#include <gtest/gtest.h>
#include "build_sys/shape.h"

// Demonstrate some basic assertions
TEST(ShapeTest, BasicAssertions) {
    Rectangle temp= Rectangle(1.0, 2.0);
    Shape* s = &temp;
    EXPECT_DOUBLE_EQ(s->area(), 2.0);

    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // expect equality
    EXPECT_EQ(7 * 6, 42);
}