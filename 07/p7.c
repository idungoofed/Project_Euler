#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/** return 1 if prime, else 0*/
int checkPrime(int num) {
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


int main() {
  int numP = 6;
  long long int i = 15;
  while(numP < 10001) {
    if (checkPrime(i)) {
      numP++;
    }
    i+=2;
  }
  printf("Ans: %lld\n", i-2);
}
