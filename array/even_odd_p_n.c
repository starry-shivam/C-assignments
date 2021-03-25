// program to count number of pos, neg, even, odd
// numbers in an array of 25 elements.
#include<stdio.h>

void main() {
   int arr[25];
   int even=0, odd=0, pos=0, neg=0, i;

   // taking input from user.
   printf("Enter 25 elememts");
   for(i=0;i<25;i++) {
      scanf("%d", &arr[i]);
   }

   // count occurrence of pos, neg, odd & even.
   for(i=0;i<25;i++) {
      // pos & neg check.
      if(arr[i] > 0) {
         pos++;
      }
      else if(arr[i] != 0) {
         neg++;
      }

      // odd even check.
      if(arr[i] % 2 == 0) {
         even++;
      }
      else {
         odd++;
      }
   }

   printf("Positive nums = %d, negative nums = %d", pos, neg);
   printf("odd nums = %d, even nums = %d", odd, even);
}
