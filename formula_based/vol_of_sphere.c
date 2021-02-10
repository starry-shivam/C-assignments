// program to calculate volume of sphere

#include<stdio.h>
int main()
{
     // declaration of vars
     int r;
     float volume_sphere;
     // take input for radius
     printf("Enter Radius : ");
     scanf("%d",&r);
     // calculate the volume
     volume_sphere = (4/3.0)*3.14*r*r*r;
     // finally print it
     printf("\nVolume of Sphere = %f",volume_sphere);
     return 0;
}
