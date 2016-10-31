#include <stdio.h>

#define SIZE1 3
#define SIZE2 4
#define SIZE3 5

int arr1[SIZE1] = {1, 2, 6};
int arr2[SIZE2] = {6,1,2,3};
int arr3[SIZE3] = {13,6,1,2,3};

int result1, result2, result3;

int firstLast6(int *nums, int length);

int main(){

  result1 = firstLast6(arr1, SIZE1);
  result2 = firstLast6(arr2, SIZE2);
  result3 = firstLast6(arr3, SIZE3);

  printf("Test 1: expected 1, returned: %d\n", result1);
  printf("Test 2: expected 1, returned: %d\n", result2);
  printf("Test 3: expected 0, returned: %d\n", result3);

  return (0);
}

int firstLast6(int *nums, int length){
  int result;
  if(*nums == 6 || *(nums + length - 1) == 6){
    result = 1;
  }
  else
    result = 0;

  return result;
}
