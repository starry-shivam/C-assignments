// program to calculate circumference of circle.

#include<stdio.h>
int main()
{
     int r;
     float cir;
     // take radius input
     printf("Enter Radius : ");
     scanf("%d",&r);
     // calculation part
     cir=2*3.14*r;
     // print the output
     printf("\nCircumference of Circle = %.2f",cir);
     return 0;
}
