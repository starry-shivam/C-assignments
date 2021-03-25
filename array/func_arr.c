#include<stdio.h>

void modifies(int arr[]);

void main() {
   int i, arr[] = {1,2,3,4,5,6,7,8,9,10};
   modifies(arr);
   for(i=0;i<9;i++) {
      printf("%d", arr[i]);
   }
}

void modifies(int arr[]) {
   int i;
   for(i=0;i<9;i++) {
      arr[i] = arr[i] * 3;
   }
}

