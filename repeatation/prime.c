// check if number is prime or not

#include<stdio.h>

void main() {
  int i=2, n, flag=0;
  printf("Enter a number:\n");
  scanf("%d", &n);

  while (i<=n-1) {
      if(n%i==0) {
        flag = 1;
        break;
      }
      else
        i++;
  }

  if (flag==1)
     printf("Not prime num");
  else
     printf("prime number");
}
