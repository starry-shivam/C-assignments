#include <stdio.h>

void make_palindrome(char arr[], int len);

void main() {
  char st[100], opt;
  int i, len=0, flag=0;

  printf("Enter  the string : ");
  gets(st);

  // calculate length of string
  while(st[len] != '\0') {
       len++;
  }

  // check if palindrome
  for(i=0;i<len;i++) {
     if(st[i] != st[len-i-1]) {
       flag=1;
       break;
     }
  }

  if(flag==1) {
     printf("string is not palindrome\n");
     printf("Do you want to make it palindrome? (y | n) ");
     scanf("%c", &opt);
     if(opt=='y') {
        printf("Palindrome of %s is ", st);
        make_palindrome(st, len);
     }
     else {
        printf("Fair enough.");
     }

  }

  else {
    printf("String is palindrome");
  }
}


void make_palindrome(char arr[], int len) {
    char rev[100];
    int i, j;
    j = len - 2;
    // copy reverse of original string
    // but excluding last character.
    for(i=0;i<(len-1);i++) {
        rev[i] = arr[j];
        j--;
    }
    printf("%s", arr);
    printf("%s", rev);

}
