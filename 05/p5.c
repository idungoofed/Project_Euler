#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
  //int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int nums[8] = {20, 19, 18, 17, 16, 14, 13, 11};
  int i, broke;
  long long int start = 40;
  while (1) {
    for (i = 0; i < 8; i++) {
      //printf("Start = %lld, checking %d\n", start, nums[i]);
      broke = 0;
      if (start%(nums[i])) {
	start+= 20;
	broke = 1;
	break;
      }
    }
    if (!broke) {
      printf("Ans = %lld\n", start);
      return EXIT_SUCCESS;
    }
  }
}
