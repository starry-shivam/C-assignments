// print elements of array in reverse.

#include<stdio.h>

void main() {
   int i, arr[] = {1,2,3,4,5,6,7,8,9};

   printf("Non reversed: ");
   for(i=0;i<9;i++) {
       printf("%d", arr[i]);
   }

   printf("\n");

   printf("Reversed: ");
   for(i=8;i>=0;i--) {
       printf("%d", arr[i]);
   }
}
