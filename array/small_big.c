// program to find biggest and smallest elements
// in an array of 25 elements.
#include<stdio.h>

void main() {
  int arr[25];
  int i, small, big;

  // taking input
  printf("Enter 25 elements\n");
  for(i=0;i<25;i++) {
      scanf("%d", &arr[i]);
  }

  // checking biggest num
  big = arr[0];
  for(i=0;i<25;i++) {
     if(arr[i] > big) {
        big = arr[i];
     }
  }

  // checking smallest num
  small = arr[0];
  for(i=0;i<25;i++) {
     if(arr[i] < small) {
       small = arr[i];
     }
  }
  printf("biggest = %d, smallest = %d", big, small);
}


