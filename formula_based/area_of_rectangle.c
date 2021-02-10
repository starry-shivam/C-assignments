// calculate area of rectangle.

#include<stdio.h>
int main()
{
     // declare vars
     int length, breadth, rect_area;
     // take inputs
     printf("Enter Length  : ");
     scanf("%d",&length);
     printf("Enter Breadth : ");
     scanf("%d",&breadth);
     // calculate the area
     rect_area = length * breadth;
     // finally show the output
     printf("\nArea of Rectangle = %d",rect_area);
     return 0;
}
