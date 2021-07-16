#include<stdio.h>

void main() {
   float c;
   printf("Enter temperature in celsius: ");
   scanf("%f", &c);
   printf("%f ° C => %f ° F", c, c * 1.8 + 32);
}
