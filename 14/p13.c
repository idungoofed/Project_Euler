#include <stdio.h>
#include <stdlib.h>

int getAnswerHelper(long unsigned int num) {
  if (num == 1) {
    return 0;
  }
  else {
    return 1 + getAnswerHelper(num%2 ? 3*num+1 : num/2);
  }
}


void getAnswer(int *num, int *chainLen) {
  *chainLen = -1;
  *num = -1;
  long unsigned int i;
  for (i = 999999; i >= 524288; i--) {
    printf("Calculating %lu\n", i);
    int curLen = getAnswerHelper(i);
    if (curLen > *chainLen) {
      *chainLen = curLen;
      *num = i;
    }
  }
}


int main(int argc, char *argv[]) {
  int num;
  int chainLen;
  getAnswer(&num, &chainLen);
  printf("Number: %d\nChain length: %d\n", num, chainLen);
  return EXIT_SUCCESS;
}
