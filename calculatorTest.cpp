//
// Created by David PROSPÉRIN on 16/03/2026.
//

#include "Calculator.h"
#include <gtest/gtest.h>
#include <iostream>
using namespace std;

TEST(CalculatorFactorialTest, ZeroValue) {
    Calculator calc;
    EXPECT_EQ(1, calc.factorielle(0));
}

TEST(CalculatorFactorialTest, StandardValues) {
    Calculator calc;
    EXPECT_EQ(1, calc.factorielle(1));
    EXPECT_EQ(120, calc.factorielle(5));
}
