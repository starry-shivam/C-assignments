// sort array in ascending order
#include<stdio.h>

void main() {
   int arr[15], i,j,t;

   printf("enter 15 elements\n");
   for(i=0;i<15;i++) {
      scanf("%d", &arr[i]);
   }

   for(i=0;i<15;i++) {
      for(j=i+1;j<15;j++) {
          if(arr[j] < arr[i]) {
             t = arr[i];
             arr[i] = arr[j];
             arr[j] = t;
          }
      }
   }

   printf("sorted array: ");
   for(i=0;i<15;i++) {
      printf("%d\t", arr[i]);
   }
}
