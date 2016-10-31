#include <stdio.h>

#define SIZE1 4
#define SIZE2 3
#define SIZE3 5

int input1[SIZE1] = {1,2,3,4};
int input2[SIZE2] = {1,2,3};
int input3[SIZE3] = {8,6,7,9,5};

int correctResult1[SIZE1] = {4,3,2,1};
int correctResult2[SIZE2] = {3,2,1};
int correctResult3[SIZE3] = {5,9,7,6,8};

int * swapEnds(int *pInput, int length);
int resultChecker(int *pInput, int *pResult, int length);

int main(){
  int result1 = resultChecker(swapEnds(input1, SIZE1), correctResult1, SIZE1);
  int result2 = resultChecker(swapEnds(input2, SIZE2), correctResult2, SIZE2);
  int result3 = resultChecker(swapEnds(input3, SIZE3), correctResult3, SIZE3);

  printf("Test1: %d\nTest2: %d\nTest3: %d\n",result1, result2, result3);
  
  return (0);
}

int resultChecker(int *pInput, int *pResult, int length){
  for(int i = 0; i < length; i++){
    if(*(pInput) != *(pResult) )
      return 0;
  }
  return 1;
}

int * swapEnds(int *pInput, int length){
  int temp = *(pInput);
  *(pInput) = *(pInput + length - 1);
  *(pInput + length - 1) = temp;
  //le old switcheroo

  //should change the array just because its passed by reference
  return pInput;
}
