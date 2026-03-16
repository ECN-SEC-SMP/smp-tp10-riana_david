//
// Created by David PROSPÉRIN on 16/03/2026.
//

#include "Calculator.h"
#include <gtest/gtest.h>

TEST(CalculatorFactorialTest, ZeroValue) {
    Calculator c;
    EXPECT_EQ(1,c.factorielle(0));
}
