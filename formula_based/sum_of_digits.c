/* Calculate sum of digits of a number.
   Example:
    INPUT: (12345)
    SUM = (1+2+3+4+5)
    OUTPUT: 15
*/

#include <stdio.h>

int main()
{
   int n, t, sum = 0, remainder;

   printf("Enter an integer\n");
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);

   return 0;
}


