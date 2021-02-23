// print fibonacci series till 'n'

#include<stdio.h>

void main() {
  int i=1, n, t1=0, t2=1, next;
  printf("enter a num:\n");
  scanf("%d", &n);

  while(i<=n) {
      printf("%d\n", t1);
      next = t1+t2;
      t1 = t2;
      t2 = next;
      i++;
  }
}
