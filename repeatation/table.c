#include<stdio.h>

void main() {
  int n, i=1;
  printf("enter a num:\n");
  scanf("%d", &n);

  while(i<=10) {
    printf("%d x %d = %d\n", n, i, n*i);
    i++;
  }

}
