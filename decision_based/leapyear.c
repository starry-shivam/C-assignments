#include<stdio.h>

void main() {
  int year;
  printf("enter the year:\n");
  scanf("%d", &year);

  if (year%4 == 0 && year%100 != 0) {
     printf("it is leap year");
  }

  else if (year%400==0) {
     printf("it is leap year");
  }

  else {
     printf("it is not leap year!");
  }

}
