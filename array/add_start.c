// add elements at begining of array.

#include<stdio.h>

void main() {
   int arr[50], i, element, pos, size;

   printf("How many Element to Store in Array ? ");
   scanf("%d", &size);

   printf("Enter %d Array Elements: ", size);
   for(i=0; i<size; i++) {
       scanf("%d", &arr[i]);
   }

   printf("\nEnter Element to Insert: ");
   scanf("%d", &element);
   for(i=size; i>=1; i--) {
       arr[i] = arr[i-1];
   }
   arr[i] = element;
   size++;

   printf("\nThe New Array is:\n");
   for(i=0; i<size; i++) {
       printf("%d  ", arr[i]);
   }
}
