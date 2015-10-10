#include "unity.h"
#include "RadixSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_find_significant_number_of_largest_number(void)
{
	int x = getSignificantNum(100);
	TEST_ASSERT_EQUAL(2,x);
}

void test_find_largest_number(void)
{
	int array[5] = {100,20,324,567,19};
	int largestNum = getLargestNum(array);
	int x = getSignificantNum(largestNum);
	TEST_ASSERT_EQUAL(2,x);
	TEST_ASSERT_EQUAL(567,largestNum);
}
