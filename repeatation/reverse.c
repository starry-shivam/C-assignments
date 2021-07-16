#include<stdio.h>

int reverse(int n);

void main() {
   int n;
   printf("Enter a number ");
   scanf("%d", &n);
   printf("Reverse of %d is %d", n, reverse(n));
}

int reverse(int n) {
   int rev=0, rem;
   while (n != 0) {
      rem = n % 10;
      rev = rev * 10 + rem;
      n /= 10;
   }
   return rev;
}
