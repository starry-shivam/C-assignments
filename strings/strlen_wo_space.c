#include<stdio.h>

int len_wo_space(char st[]) {
   int i, count=0;
   for(i=0;st[i]!='\0';i++) {
       if(st[i] != '\n' && st[i] != ' ') {
          count++;
       }
   }
   return count;
}


void main() {
   char st[100];
   int stlen;
   printf("Enter some string (with spaces)");
   fgets(st, sizeof(st), stdin);
   stlen = len_wo_space(st);
   printf("Length of string without spaces: %d", stlen);
}
