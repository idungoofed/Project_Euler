#include <stdlib.h>
#include <stdio.h>
#include <math.h>

static int max = 2000000;

int checkPrime(int num) {
  if (num < 14 && (num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13)) {
    //printf("checkprime: %d\n", num);
    return 1;
  }
  else if (num < 14) {
    return 0;
  }
  if (num > 13 && (!(num%2) || !(num%3) || !(num%5) || !(num%7) || !(num%11) || !(num%13))) {
    return 0;
  }
  int j = sqrt(num);
  int i;
  for (i = 17; i <= j; i+= 2) {
    if (!(num%i)) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int i;
  long long int sum = 0;
  for (i = 2; i < max; i++) {
    //printf("Checking: %d\n", i);
    if (checkPrime(i)) {
      //printf("%d went through!\n", i);
      sum+= i;
    }
  }
  printf("Sum: %lld\n", sum);
}
