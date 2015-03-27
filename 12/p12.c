#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#define nonsqrt //dont define!!!

int main() {
  long long int num = 1;
  int factors = 2;
  #ifdef nonsqrt
  int i, j;
  #endif
  #ifndef nonsqrt
  int i, j, k;
  #endif
  i = 2;
  while (factors <= 500) {
    #ifdef nonsqrt
    num+=i;
    factors = 2;
    for (j = 2; j <= num; j++) {
      if (!(num%j)) {
	factors++;
      }
    }
    i++;
    #endif
    #ifndef nonsqrt
    num+= i;
    factors = 1;
    k = sqrt(num);
    for (j = 2; j < k; j++) {
      if (!(num%j)) {
	factors++;
      }
    }
    factors = factors * 2;
    if (!(num%k)) {
      factors++;
    }
    i++;
    #endif
    //printf("Num: %d Factors: %d\n", num, factors);
  }
  printf("Ans: %lld\n", num);
}
