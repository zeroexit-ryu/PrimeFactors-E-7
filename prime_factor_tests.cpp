#include "gmock/gmock.h"
#include "prime_factors.cpp"

using namespace testing;

class PrimeFixture : public Test {
public:
	PrimeFactors prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, 0f1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, 0f2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}
