/* prints: * * * *
            * * *
             * *
              *
*/

#include<stdio.h>

void main() {
   int i, j, k;
    for(i=1;i<=4;i++) {
       for(j=1;j<=(i-1);j++) {
          printf(" ");
       }
       for(k=1;k<=(5-i);k++) {
          printf("* ");
       }
       printf("\n");
    }
}
