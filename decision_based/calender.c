#include<stdio.h>

void main() {
    int year, ref=1900, leap_year, total_days, day;

    printf("Enter the year: ");
    scanf("%d", &year);

    year = year-ref;
    leap_year = year/4;
    total_days = (year*365) + leap_year;

    // find the day
    day = total_days%7;

    switch(day) {
      case 0:
        printf("Monday");
        break;
      case 1:
        printf("Tuesday");
        break;
      case 2:
        printf("Wednesday");
        break;
      case 3:
        printf("Thursday");
        break;
      case 4:
        printf("Friday");
        break;
      case 5:
        printf("Saturday");
        break;
      case 6:
        printf("Sunday");
        break;
      }
}
