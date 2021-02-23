#include<stdio.h>

void main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num>0) {
       printf("Postive number");
    }
    else if (num==0) {
       printf("Zero");
    }
    else {
       printf("negative num");
    }
}
