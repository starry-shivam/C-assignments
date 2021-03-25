#include<stdio.h>

int len(char st[]) {
    int i, count=0;
    for(i=0;st[i]!='\0';i++) {
        if(st[i] != '\n') {
           count++;
        }
    }
       return count;
}

void main() {
  char st[100];
  printf("Enter some string:");
  fgets(st, sizeof(st), stdin);
  printf("Length of string is %d", len(st));
}
