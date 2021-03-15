#include<stdio.h>

int sum(int n);

void main() {
   int n;
   printf("enter numbers");
   scanf("%d", &n);
   printf("sum is %d", sum(n));
}

int sum(int n) {
    int s, r;
    if(n!=0) {
       r = n%10;
       s = r+sum(n/10);
    }
    else {
       return 0;
    }
    return s;
}
