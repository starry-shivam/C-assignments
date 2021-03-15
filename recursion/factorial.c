#include<stdio.h>

int factorial(int n) {
   //base case
   if(n == 0) {
      return 1;
   }
   else {
      return n * factorial(n-1);
   }
}

void main() {
  int n;
  printf("enter the number");
  scanf("%d", &n);
  printf("Fact of %d = %d", n, factorial(n));
}
