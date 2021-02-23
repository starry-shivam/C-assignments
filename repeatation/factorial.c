#include<stdio.h>

void main() {
  int n, i=1, f=1;

  printf("enter a num:\n");
  scanf("%d", &n);

  while (i<n) {
    i++;
    f = f*i;
  }

  printf("Factorial of %d => %d", n,f);

}
