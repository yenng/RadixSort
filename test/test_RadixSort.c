#include "unity.h"
#include "RadixSort.h"

void setUp(void){}

void tearDown(void){}

void test_find_significant_number_of_largest_number(void){
	int x = getSignificantNum(100);
	TEST_ASSERT_EQUAL(2,x);
}

void test_find_largest_numberr(void){
	int array[5] = {100,20,324,567,19};
	int largestNum = getLargestNum(&array[0],5);
	TEST_ASSERT_EQUAL(567,largestNum);
}

void test_find_largest_number_and_its_significant_number(void){
	int array[5] = {100,20,324,567,19};
	int largestNum = getLargestNum(&array[0],5);
	int x = getSignificantNum(largestNum);
	TEST_ASSERT_EQUAL(2,x);
	TEST_ASSERT_EQUAL(567,largestNum);
}

void test_simple_number(void){
	int array[4] = {3,4,1,2};
	int largestNum = getLargestNum(&array[0],4);
	int sigNum = getSignificantNum(largestNum);
	RadixSort(&array[0],4,sigNum);
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
	TEST_ASSERT_EQUAL(3,array[2]);
	TEST_ASSERT_EQUAL(4,array[3]);
}

void test_radix_sort_with_three_element(void){
	int array[3]={30,188,2};
	int largestNum = getLargestNum(&array[0],3);
	int sigNum = getSignificantNum(largestNum);
	RadixSort(&array[0],3,sigNum);
	TEST_ASSERT_EQUAL(2,array[0]);
	TEST_ASSERT_EQUAL(30,array[1]);
	TEST_ASSERT_EQUAL(188,array[2]);
}

void test_radix_sort_with_five_element(void){
	int array[5]={3,30,188,2,1945};
	int largestNum = getLargestNum(&array[0],5);
	int sigNum = getSignificantNum(largestNum);
	RadixSort(&array[0],5,sigNum);
	TEST_ASSERT_EQUAL(2,array[0]);
	TEST_ASSERT_EQUAL(3,array[1]);
	TEST_ASSERT_EQUAL(30,array[2]);
	TEST_ASSERT_EQUAL(188,array[3]);
	TEST_ASSERT_EQUAL(1945,array[4]);
}

void test_radix_sort_with_many_elements(void){
	int array[13]={3,30,188,2,1945,4444,12394,11,90,1,345,39384,119282};
	int largestNum = getLargestNum(&array[0],13);
	int sigNum = getSignificantNum(largestNum);
	RadixSort(&array[0],13,sigNum);
	TEST_ASSERT_EQUAL(1,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
	TEST_ASSERT_EQUAL(3,array[2]);
	TEST_ASSERT_EQUAL(11,array[3]);
	TEST_ASSERT_EQUAL(30,array[4]);
	TEST_ASSERT_EQUAL(90,array[5]);
	TEST_ASSERT_EQUAL(188,array[6]);
	TEST_ASSERT_EQUAL(345,array[7]);
	TEST_ASSERT_EQUAL(1945,array[8]);
	TEST_ASSERT_EQUAL(4444,array[9]);
	TEST_ASSERT_EQUAL(12394,array[10]);
	TEST_ASSERT_EQUAL(39384,array[11]);
	TEST_ASSERT_EQUAL(119282,array[12]);
}


