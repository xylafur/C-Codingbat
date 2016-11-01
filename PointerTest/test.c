#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a = 55;
	int b = 66;
	printf("Before swap:\na = %d , b = %d\n", a, b);
	swap(&a, &b);
	printf("After  swap:\na = %d , b = %d\n", a, b);
}
