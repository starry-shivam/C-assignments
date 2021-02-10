// calculate simple interest

#include<stdio.h>
int main()
{
     // declaration of vars
     int amt, yrs;
     float rate_intrest,SI;
     // taking input
     printf("Enter Principal Amount : ");
     scanf("%d", &amt);
     printf("Enter Number of Years  : ");
     scanf("%d", &yrs);
     printf("Enter Rate of Interest : ");
     scanf("%f", &rate_intrest);
     // calulate SI (simple interest)
     SI=amt*yrs*rate_intrest/100.0;
     // print the output
     printf("\nSimple Interest =  %.2f",SI);
     return 0;
}
