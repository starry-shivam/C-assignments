#include<stdio.h>

#define MAX_SIZE 100

int main() {
  int arr[MAX_SIZE];
  int size, i, toSearch, toReplace, found;

  printf("Enter size of array: ");
  scanf("%d", &size);

  printf("Enter elements in array: ");
  for(i=0; i<size; i++) {
     scanf("%d", &arr[i]);
  }

  printf("\nEnter element to search: ");
  scanf("%d", &toSearch);

  found = 0;

  for(i=0; i<size; i++) {
     if(arr[i] == toSearch) {
        found = 1;
        break;
     }
  }

  if(found==1) {
     printf("%d is found at %d position\n", toSearch, i);
     printf("Enter a number to replace it ");
     scanf("%d", &toReplace);
     arr[i] = toReplace;
     printf("Done! resultant array is:");
     for(i=0; i<size; i++) {
         printf("%d", arr[i]);
         printf("\n");
     }
  }

  else {
    printf("Element not found.");
  }
}
