#include <stdlib.h>
#include <stdio.h>

int main() {
  int a, b, c;
  a = 1;
  b = 1;
  for (c = 998; c > 2; c--) {
    for(b = 1; b < c; b++) {
      for(a = 1; a < b; a++) {
	if (a*a+b*b == c*c) {
	  if (a+b+c == 1000) {
	    printf("a: %d, b: %d, c: %d\n", a, b, c);
	    printf("Ans: %d\n", a*b*c);
	    return EXIT_SUCCESS;
	  }
	}
      }
    }
  }
}
