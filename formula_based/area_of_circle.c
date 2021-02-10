// program to calculate area of a circle.

#include<stdio.h>
int main()
{
     /* variable declaration */
     int r;
     float area;
     /* taking user input*/
     printf("Enter Radius : ");
     scanf("%d",&r);
     /* calculation of area */
     area=3.14*r*r;
     /* Output */
     printf("\nArea of Circle = %f",area);
     return 0;
}
