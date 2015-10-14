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

void RadixSort(int *array,int size){
	int i;
	int k = 0;
	//**********************print array**********************
	printf("[ ");
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("]\n");
	//**********************print array**********************
	int largestNum, sigNum, semiSorted[size], newArray[size],beam[10][size],j;
	int count[10] = {0};
	largestNum = getLargestNum(&array[0],size);
	int x = getSignificantNum(largestNum);
	printf("%i\n",largestNum);
	printf("%i\n",x);
	for(i = 0; i < size; i++){
		newArray[i] = array[i]/pow(10,x);
		for(j=0;j<10;j++){
			if (newArray[i]==j){
				beam[j][count[j]] = array[i];
				// printf("%d\n", array[i]);
				count[j]++;
			}
		}
	}
	//**********************print array**********************
	printf("[ ");
	for (i = 0; i < count[0]; i++)
		printf("%d ", beam[0][i]);
	printf("]\n");
	//**********************print array**********************
	
	for(i=0;i<10;i++){
		for(j=0;j<count[i];j++){
			array[k] = beam[i][j];
			k++;
		}
	}
	//**********************print array**********************
	printf("[ ");
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("]\n");
	//**********************print array**********************
	while(x!=0){
		// RadixSort(array, size);
		x--;
	}
}



