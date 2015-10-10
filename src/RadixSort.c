#include "RadixSort.h"
#include <limits.h>

int getLargestNum(int *array){
	int largestNum = INT_MIN;
	int i;
	for(i = 0; i < sizeof(array); i++){
		if(array[i] > largestNum){
			largestNum = array[i];
		}
	}
	return largestNum;
}

int getSignificantNum(int largestNum){
	int sigNum = 0;
	while(largestNum >= 10){
		largestNum = largestNum / 10;
		sigNum++;
	}
	return sigNum;
}

int RadixSort(int array){
	
}
