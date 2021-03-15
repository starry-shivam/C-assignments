#include <stdio.h>

void swap(int *a, int *b) {
   int t;
   t = *a;
   *a = *b;
   *b = t;
}

void main() {
  int a=5, b=6;
  // before swap
  printf("A = %d, B = %d\n", a,b);
  swap(&a, &b);
  printf("A = %d, B = %d", a,b);
}
