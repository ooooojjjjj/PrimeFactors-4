#include "pch.h"
#include "../PrimeFactors_4/PrimeFactors.cpp"

using namespace std;

TEST(PrimeFactors, Of1) {
    PrimeFactors prime_factor;
    vector<int> expected = {};

    EXPECT_EQ(expected, prime_factor.of(1));
}
