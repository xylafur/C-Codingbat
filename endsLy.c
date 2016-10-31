#include <stdio.h>
#include <string.h>

#define NUMBER_OF_RESULTS 9
#define MAX_STRING_LENGTH 10

char testCases[NUMBER_OF_RESULTS][MAX_STRING_LENGTH] = {"oddly", "y", "oddy", "oddl", "olydd", "ly", "", "falsey", "evenly" };
int booleanAnswers[NUMBER_OF_RESULTS] = {1,0,0,0,0,1,0,0,1};

void testResults();
int endsLy(char * testString);

int main(){
  testResults();
  return 0;
}

void testResults(){
  for(int i = 0; i < NUMBER_OF_RESULTS; i++){
    int individualResult = endsLy(testCases[i]);
    if(individualResult == *(booleanAnswers + i))
      printf("Test%d correct.",i);
    else
      printf("Test%d incorrect.",i);
    printf("\t\tExpected Result: %d\t\tReturned Result: %d\n", *(booleanAnswers + i),individualResult );
  }
}

int endsLy(char * testString){
  int testStringLength = strlen(testString);
  if(testStringLength < 2)
    return 0;
  char lastTwoCharacters[] = { testString[testStringLength - 2], testString[testStringLength - 1] };
  if(strcmp(lastTwoCharacters, "ly") == 0 )
    return 1;
  return 0;
}
