#include <stdio.h>

int main(void) {
  int sum;
  sum = 0;
  printf("Kiírom 1000 -ig minden tizedik 3 -mal osztható számot\n\n");
  for (int i = 0; i < 1000; i++) {
    if(i % 3 == 0) {
      sum += i;
      if(i % 30 == 0) {
        printf("%d, ", i);
    }
    }
  }
    printf("\n\n1000-ig a 3 mal osztható számok összege %d ", sum);
  return 0;
}