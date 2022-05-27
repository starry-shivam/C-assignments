// implements queue data structure.

#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
};
 
void insert(struct node **fr, struct node **re) {
    struct node *t;
    t = malloc(sizeof(struct node));
    printf("Enter some number: ");
    scanf("%d", &(t->value));
    t->next = NULL;

    if(*fr == NULL || *re == NULL) {
        *fr = t;
        *re = t;
    }
    else {
        (*re)->next = t;
         *re = t;
    }
}

void rem(struct node **fr, struct node **re) {
     struct node *t;
     t = *fr;

     if(*fr == NULL) {
         printf("Queue is empty\n");
     }
     else if(*fr == *re) {
         *fr = NULL;
         *re = NULL;
         printf("Deleted element: %d\n", t->value);
     }
     else {
         *fr = t->next;
         printf("Deleted element: %d\n", t->value);
     }
     free(t);
     system("sleep 1");
}

void main() {
   int ch;
   struct node *first = NULL;
   struct node *rear = NULL;

   for(;;) {
      system("clear");

      printf("Queue data structure operation\n");
      printf("1 = Insert\n");
      printf("2 = Delete\n");
      printf("3 = exit\n");
      scanf("%d", &ch);

      switch(ch) {
         case 1:
            insert(&first, &rear);
            break;
         case 2:
            rem(&first, &rear);
            break;
         case 3:
            exit(1);
         default:
            printf("wrong choice\n");
      }
   }
}
