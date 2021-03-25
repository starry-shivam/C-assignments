#include<stdio.h>

void st_low(char st[]) {
   int i;
   for(i=0;st[i]!='\0';i++) {
       // 65 - 90 are ascii value of
       // capital alphabets.
       if(st[i] >= 65 && st[i] <= 90) {
          /*
          adding 32 to given ascii value
          of capital letter gives us small
          letter's ascii value of same char.
          */
          st[i] += 32;
       }
   }
}

void main() {
   char st[100];
   printf("enter a string\n");
   fgets(st, sizeof(st), stdin);
   // convert to lowercase.
   st_low(st);
   printf("Resultant lower string:\n");
   printf("%s", st);
}
