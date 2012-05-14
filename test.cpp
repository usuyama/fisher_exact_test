#include <gtest/gtest.h>
#include "fisher.hpp"

void nearly_equal(double a, double b) {
		ASSERT_LE(a, b + 0.0001);
		ASSERT_GE(a, b - 0.0001);
}

TEST(FisherTestTest, ForSmall)
{
		nearly_equal(fisher_test(1, 2, 3, 4), 1.0);
		nearly_equal(fisher_test(10, 2, 2, 8), 0.008284);
		nearly_equal(fisher_test(0, 11, 3, 8), 0.2143);
}

TEST(FisherTestTest, ForBig)
{
		nearly_equal(fisher_test(50, 11, 40, 15), 0.2696);
		nearly_equal(fisher_test(50, 21, 40, 15), 0.8438);
}
