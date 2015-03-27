#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static long int givenNum = 600851475143;

/**
 * num is prime, return 1, else 0
 */
int checkPrime(long int num) {
  printf("Checking prime: %ld\n", num);
  if (num < 14 && (num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13)) {
    return 1;
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

/**
 * assumes givenNum > 0
 */
int main() {
  long int i = givenNum/2;
  for (; i > 0; i--) {
    //printf("i = %ld\n", i);
    if (!(givenNum%i)) {
      if (checkPrime(i)) {
	printf("Largest prime factor: %ld\n", i);
	return EXIT_SUCCESS;
      }
    }
  }
  return EXIT_FAILURE;
}
