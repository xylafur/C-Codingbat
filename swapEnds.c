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
void resultOutput(int result, int *pInput, int *pResult, int length);

int main(){
  //  1/0       returns 1/0   returns swapped array                    length
  int result1 = resultChecker(swapEnds(input1, SIZE1), correctResult1, SIZE1);
  int result2 = resultChecker(swapEnds(input2, SIZE2), correctResult2, SIZE2);
  int result3 = resultChecker(swapEnds(input3, SIZE3), correctResult3, SIZE3);

  resultOutput(result1, input1, correctResult1, SIZE1);
  resultOutput(result2, input2, correctResult2, SIZE2);
  resultOutput(result3, input3, correctResult3, SIZE3);

  return (0);
}
void resultOutput(int result, int *pInput, int *pResult, int length){
  if(result == 1)
    printf("Correct.\t");
  else
    printf("Incorrect.\t");
  printf("Expected result {");
  for(int i = 0; i < length; i++){
    printf("%d", *(pResult + i));
    if(i < length - 1)
      printf(", ");
  }
  printf("}\tRecieved result {");
  for(int i = 0; i < length; i++){
    printf("%d", *(pInput + i));
    if(i < length - 1)
      printf(", ");
  }
  printf("}\n");
}
int resultChecker(int *pInput, int *pResult, int length){
  for(int i = 0; i < length; i++){
    if(*(pInput) != *(pResult) )
      return 0;
  }
  return 1;
}

//swapEnds is where the user would code his/her solution
int * swapEnds(int *pInput, int length){
  int temp = *(pInput);
  *(pInput) = *(pInput + length - 1);
  *(pInput + length - 1) = temp;
  //le old switcheroo

  //should change the array just because its passed by reference
  return pInput;
}
