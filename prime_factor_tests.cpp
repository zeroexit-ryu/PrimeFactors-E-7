#include "gmock/gmock.h"
#include "prime_factors.cpp"

TEST(PrimeFactors, 0f1) {
	PrimeFactors prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
