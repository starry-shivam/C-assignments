// add elements before or after some specific elememt

#include<stdio.h>

void replace(int arr[], int size, int idx, int element);
int search(int arr[], int elem, int size);

void main() {
   int arr[50], i, element, rel_elem, idx, size;
   char opt;

   printf("How many Element to Store in Array ? ");
   scanf("%d", &size);

   printf("Enter %d Array Elements: ", size);
   for(i=0; i<size; i++) {
       scanf("%d", &arr[i]);
   }

   printf("\nEnter Element to Insert: ");
   scanf("%d", &element);

   printf("enter relative element: ");
   scanf("%d", &rel_elem);

   printf("Insert before or after %d ? (B|A)", rel_elem);
   scanf(" %c", &opt);

   if(opt == 'A') {
      idx = search(arr, rel_elem, size);
      idx++;
      if(idx != -1) {
         replace(arr, size, idx, element);
      }
      else {
         printf("Element not exists!");
      }
   }
   else if(opt == 'B') {
      idx = search(arr, rel_elem, size);
      if(idx != -1) {
         replace(arr, size, idx, element);
      }
      else {
         printf("Element not exists!");
      }
  }
}


void replace(int arr[], int size, int idx, int element) {
   int i;
   for(i=size; i>idx; i--) {
       arr[i] = arr[i-1];
   }
   arr[i] = element;
   size++;

   printf("\nThe New Array is:\n");
   for(i=0; i<size; i++) {
       printf("%d  ", arr[i]);
   }
}


int search(int arr[], int elem, int size) {
    int i;
    for(i=0; i<size; i++) {
        if(arr[i] == elem) {
           return i;
        }
    }
    return -1;
}
