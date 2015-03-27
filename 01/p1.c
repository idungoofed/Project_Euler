#include <stdlib.h>
#include <stdio.h>

static int max = 1000;

int main() {
  int i, sum;
  sum = 0;
  for (i = 1; i < max; i++) {
    if (!(i%3) || !(i%5)) {
      sum+= i;
    }
  }
  printf("Sum = %d\n", sum);
}
