/* program to find a number raised to the power
of another (b = 2, p = 3 => 2*2*2) */

#include<stdio.h>

void main() {
  int i,b,p,val=1;
  printf("Enter base & power:\n");
  scanf("%d%d", &b,&p);

  for (i=1;i<=p;i++) {
    val = b*val;
  }

  printf("results %d", val);

}
