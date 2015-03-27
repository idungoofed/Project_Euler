#include <stdio.h>
#include <stdlib.h>

int main() {
  long long int sum1, sum2;
  int i;
  sum1 = 0;
  sum2 = 0;
  for(i = 1; i < 101; i++) {
    sum1+= i*i;
    sum2+= i;
  }
  sum2 = sum2*sum2;
  printf("Ans: %lld\n", sum2 - sum1);
}
