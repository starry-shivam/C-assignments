#include<stdio.h>

void main() {
  int opt, n1, n2;

  printf("choose options:\n");
  printf("1 - Addition\n");
  printf("2 - Substraction\n");
  printf("3 - Multiplication\n");
  printf("4 - Remineder\n");
  printf("5 - Quotient\n");
  scanf("%d", &opt);

  if (opt==1) {
     printf("enter two numbers to add:\n");
     scanf("%d %d", &n1, &n2);
     printf("Results: %d", n1+n2);
  }

  else if (opt==2) {
     printf("enter two numbers to substract:\n");
     scanf("%d %d", &n1, &n2);
     printf("Results: %d", n1-n2);
  }

  else if (opt==3) {
     printf("enter two numbers to multiply:\n");
     scanf("%d %d", &n1, &n2);
     printf("Results: %d", n1*n2);
  }

  else if (opt==4) {
     printf("enter two numbers to find reminder:\n");
     scanf("%d %d", &n1, &n2);
     printf("Results: %d", n1%n2);
  }

  else if (opt==5) {
     printf("enter two numbers to find quotient:\n");
     scanf("%d %d", &n1, &n2);
     printf("Results: %d", n1/n2);
  }

  else {
     printf("Hmmm.. this looks like invalid choice!");
  }

}
