// calculate perimeter of rectangle

#include<stdio.h>
int main()
{
     // declaration of vars
     int length, breadth, rect_perimeter;
     // taking input
     printf("Enter Length  : ");
     scanf("%d", &length);
     printf("Enter Breadth : ");
     scanf("%d", &breadth);
     // calculation of perimeter
     rect_perimeter= 2*(length+breadth);
     // print output
     printf("\nPerimeter of Rectangle = %d",rect_perimeter);
     return 0;
}
