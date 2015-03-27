#include <stdlib.h>
#include <stdio.h>

static int max = 4000000;

int main() {
  int a, b, c, sum, tmp1, tmp2;
  a = 1;
  b = 2;
  c = 3;
  sum = 2;
  while (c < max) {
    if (!(c%2)) {
      sum+= c;
    }
    tmp1 = c;
    tmp2 = b;
    c = b+c;
    b = tmp1;
    a = tmp2;
  }
  printf("Sum = %d\n", sum);
}
    
      
    
