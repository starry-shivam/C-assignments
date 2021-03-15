// find area & parameter of circle using pointers

#include<stdio.h>

// func prototype
void areaPrm(int r, int *a, int *p);

int main() {
   int radius, area, parameter;
   printf("Enter radius of a circle\n");
   scanf("%d", &radius);
   areaPrm(radius, &area, &parameter);
   printf("Area is %d and parameter is %d", area,parameter);
}

void areaPrm(int r, int *a, int *p) {
     *a = 3.14*r*r;
     *p = 2*3.14*r;
}
