#include<stdio.h>
// print diagonal of square matrix

void main() {
   int i;
   // sq matrix of 4*4
   int arr1[4][4] = {
          {1,2,3,4},
          {5,6,7,8},
          {9,10,11,12},
          {13,14,15,16}
   };

   // digonal elements
   printf("Diagonal from left side:\n");
   for(i=0;i<4;i++) {
      printf("%d\n", arr1[i][i]);
   }

   printf("Diagonal from right side:\n");
   for(i=0;i<4;i++) {
      printf("%d\n", arr1[i][3-i]);
   }
}
