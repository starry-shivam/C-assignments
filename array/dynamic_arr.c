#include<stdio.h>
#include<stdlib.h>

void main() {
  int size, i, *ptr;
  printf("enter size of array");
  scanf("%d", &size);

  ptr = (int*) malloc(size*sizeof(int));

  printf("now enter elements till %d", size);

  for(i=0;i<size;i++) {
     scanf("%d", &ptr[i]);
  }

  for(i=0;i<size;i++) {
     printf("%d", ptr[i]);
  }
}
