

/* 
 * Simple quicksort implementation
 * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 25

void QuickSort(int*, int, int);

int * getUnsorted(){
	static int ARR[LEN]; 
	int r;
	srand((unsigned)time(NULL));
	for (int i = 0; i < LEN; ++i){
		ARR[i] = i + 1;
	} 
	
	int temp;
	for (int i = 0; i < LEN; ++i){
		r = rand() % LEN;
		temp = ARR[i];
		ARR[i] = ARR[r];
		ARR[r] = temp;
	}

	return ARR;
}

int partition(int *arr, int start, int end){
	int pivot = *(arr + end);
	int pin = start, temp;
	
	for (int i = start; i < end; ++i){
		if (*(arr + i) < pivot){
			temp = *(arr + i);
			*(arr + i) = *(arr + pin);
			*(arr + pin) = temp;
			pin++;
		}
	}

	temp = *(arr + end);
	*(arr + end) = *(arr + pin);
	*(arr + pin) = temp;
	
	return pin;
}

void QuickSort(int *arr, int start, int end){
	int pin = partition(arr, start, end);
	QuickSort(arr, start, pin-1);
	QuickSort(arr, pin+1, end);
}

int main(){
	int * myarr = getUnsorted();

	for (int i = 0; i<LEN; ++i){
		printf("[%d] = %d\n", i, *(myarr + i));
	}

	printf("\nSORTED: \n");

	QuickSort(myarr, 0, LEN-1);

	for (int i = 0; i<LEN; ++i){
		printf("[%d] = %d\n", i, *(myarr + i));
	}
	printf("Program DONE. \n");
}
