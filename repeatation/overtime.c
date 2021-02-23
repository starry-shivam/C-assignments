/*
write a program to calculate overtime pay of
10 employees, overtime is paid @ Rs 12 per hour
for every hour worked above 40 hours. assume that
emloyees don't work at fractional part of hour
*/

#include<stdio.h>

void main() {
  int i, wh, pay;
  for(i=1;i<=10;i++) {
    printf("enter working hour\n");
    scanf("%d", &wh);

    if (wh > 40) {
         printf("Overtime = %d\n", (wh-40)*12);
    }
    else {
         printf("No overtime!\n");
    }
  }
}
