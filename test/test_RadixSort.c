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

void test_find_largest_numberr(void)
{
	int array[5] = {100,20,324,567,19};
	int largestNum = getLargestNum(&array[0],5);
	TEST_ASSERT_EQUAL(567,largestNum);
}

void test_find_largest_number_and_its_significant_number(void)
{
	int array[5] = {100,20,324,567,19};
	int largestNum = getLargestNum(&array[0],5);
	int x = getSignificantNum(largestNum);
	TEST_ASSERT_EQUAL(2,x);
	TEST_ASSERT_EQUAL(567,largestNum);
}


void test_radix_sort_with_three_element(void){
	int array[3]={30,188,2};
	int largestNum = getLargestNum(&array[0],3);
	int x = getSignificantNum(largestNum);
	while(x > 0){
		RadixSort(&array[0],3);
		x--;
	}
}


