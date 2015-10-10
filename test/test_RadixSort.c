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
	int largestNum = getLargestNum(array);
	TEST_ASSERT_EQUAL(567,largestNum);
}

void test_find_largest_number_and_its_significant_number(void)
{
	int array[5] = {100,20,324,567,19};
	int largestNum = getLargestNum(array);
	int x = getSignificantNum(largestNum);
	TEST_ASSERT_EQUAL(2,x);
	TEST_ASSERT_EQUAL(567,largestNum);
}

void test_find_new_array(void)
{
	int array[5] = {100,20,324,567,19};
	int largestNum = getLargestNum(array);
	int sigNum = getSignificantNum(largestNum);
	int newArray[sizeof(array)],i;
	for(i = 0; i < sizeof(array); i++){
		newArray[i] = getDigit(array[i], sigNum);
	}
	TEST_ASSERT_EQUAL(1,newArray[0]);
	TEST_ASSERT_EQUAL(0,newArray[1]);
	TEST_ASSERT_EQUAL(3,newArray[2]);
	TEST_ASSERT_EQUAL(5,newArray[3]);
	TEST_ASSERT_EQUAL(0,newArray[4]);
}




