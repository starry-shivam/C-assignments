#include<stdio.h>

void main() {
  int arr1[3], arr2[3], i, j;
  // taking input
  printf("Enter three digit num");
  for(i=0;i<3;i++) {
     scanf("%d", &arr1[i]);
  }

  // saving reversed arr1 in arr2
  for(i=0,j=2;i<3;i++,j--) {
     arr2[i] = arr1[j];
  }

  // checking if reversed array == og array
  for(i=0;i<3;i++) {
     if(arr1[i] != arr2[i]) {
        printf("Not pelindrome");
        break;
     }
  }

  if(i==3) {
    printf("Pelindrome");
  }
}
