#include<stdio.h>
// take input from user and check if any number is
// repeated two times or not.

void main() {
 // stores numbers which are already seen.
 int seen[10] ={0};
 int i, n, rem;

 printf("Enter the numbers");
 scanf("%d", &n);

 while(n>0) {
   rem = n%10;
   if(seen[rem] == 1) {
      break;
   }
   seen[rem] = 1;
   n = n/10;
 }

 // we found some number repeated and break
 // out from the loop, so n remains > 0.
 if(n>0) {
   printf("Repeated numbers found");
 }

 // if n == 0 means we didn't found any
 // repeated numbers.
 if(n==0) {
   printf("No repeated numbers");
 }
}
