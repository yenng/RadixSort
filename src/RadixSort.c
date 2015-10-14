#include "RadixSort.h"
#include <limits.h>
#include <stdio.h>
#include <math.h>

int getLargestNum(int *array, int size){
	int largestNum = INT_MIN;
	int i;
	for(i = 0; i < size; i++){
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

// int getDigit(int *array, int sigNum){
	// array = *array/pow(10,sigNum);
// }

void RadixSort(int *array,int size, int sigNum){
	int i;
	int k = 0;
	int semiSorted[size], newArray[size],beam[10][size],j;
	int count[10] = {0};
	
	//Sort the array elements according to the significant number, then store to various beam.
	for(i = 0; i < size; i++){
		newArray[i] = array[i]/pow(10,sigNum);
		for(j=0;j<10;j++){
			if (newArray[i]==j){
				beam[j][count[j]] = array[i];
				count[j]++;
			}
		}
	}
	
	//take the elements out from the beam and send back to the array by pointer.
	for(i=0;i<10;i++){
		for(j=0;j<count[i];j++){
			array[k] = beam[i][j];
			k++;
		}
	}
	
	//Sort the elements from most significant number to least significant number.
	sigNum--;
	if(sigNum>=0)
		RadixSort(&array[0],size,sigNum);
		
}



