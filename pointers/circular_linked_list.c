/* Circular Linked list operations.

|-->[head| 1x] -> [data| 2x] -> [data| 3x] -> [data| head]->--|
|                                                             |
|                                                             |
|-----<------------<------------<----------<---------<--------|

*/

#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

void display(struct node *p) {
  struct node *t;

  if(p == NULL) {
     printf("Empty linked list!\n");
  }
  else {
     t = p;
     do {
          printf("%d-->", t->value);
          t = t->next;
     } while (t != p);
     printf("\n");
  }
}

void append(struct node **p) {
    struct node *t, *v;
    int val;
    printf("Enter some number: ");
    scanf(" %d", &val);

    if(*p == NULL) {
        t = malloc(sizeof(struct node));
        t->value = val;
        t->next = t;
        *p = t;
    }
    else {
        t = malloc(sizeof(struct node));
        t->value = val;
        t->next = *p;

        v = *p;
        while (v->next != (*p)) {
            v = v->next;
        }
        v->next = t;
    }
}

void rem_end(struct node **p) {
    struct node *t, *v;

    v = *p;

    if(*p == NULL) {
       printf("Linked list empty!\n");
    }
    else if(v->next == (*p)) {
         free(v);
         *p = NULL;
    }
    else {
        while (v->next->next != (*p)) {
            v = v->next;
        }
        t = v->next;
        v->next = (*p);
        free(t);
    }
}

void add_bg(struct node **p) {
   struct node *t, *v;
   int val;
   printf("Enter some number: ");
   scanf(" %d", &val);

   t = malloc(sizeof(struct node));
   t->value = val;
   t->next = t;

   if(*p == NULL) {
      *p = t;
   }
   else {
      v = *p;
      while (v->next != (*p)) {
            v = v->next;
      }
      v->next = t;
      t->next = *p;
      *p = t;
   }
}

void delete_node(int pos, struct node **p) {
    struct node *temp, *del;
    int i;

    temp = *p;

    if(*p == NULL) {
       printf("Linked list empty!\n");
    }
    else if(pos==0) {
        // check if only single node
        // exists in linked list.
        if(temp->next == (*p)) {
           *p = NULL;
        }
        else {
           del = *p;
           while (temp->next != *p) {
                 temp = temp->next;
           }
           temp->next = del->next;
           *p = temp->next;
           free(del);
        }
    }
    else {
        for(i=0; i<pos-1; i++) {
            temp = temp->next;
        }
        del = temp->next;
        temp->next = temp->next->next;
        del->next = NULL;
        free(del);
    }
}

void remove_pos(char opt, struct node **p) {
   int idx = 0, size = 0, found = 0, elem;
   struct node *v;

   if(*p == NULL) {
      printf("Linked list empty!\n");
   }
   else {
      printf("Enter relative element: ");
      scanf("%d", &elem);

      v = *p;
      do {
         if(v->value != elem && found == 0) {
            idx++;
         }
         else {
            found = 1;
         }
         v = v->next;
         size++;
      } while (v != *p);

      if(found == 0) {
         printf("Element not found!\n");
      }
      else if(opt == 'a') {
         if(idx == (size-1)) {
            printf("it is last element!\n");
         }
         else {
            idx += 1;

            delete_node(idx, p);
            printf("New Node: ");
            display(*p);
         }
      }
      else if(opt == 'b') {
         if(idx == 0) {
            printf("it is first element!\n");
         }
         else {
            idx -= 1;

            delete_node(idx, p);
            printf("New Node: ");
            display(*p);
         }
      }
   }
}

void add_node(int pos, struct node **p) {
   struct node *v, *t;
   int val;

   if(pos == 0) {
      add_bg(p);
   }
   else {
       printf("Enter some number: ");
       scanf("%d", &val);

       t = malloc(sizeof(struct node));
       t->value = val;
       t->next = t;

       v = *p;
       while(--pos) {
          v = v->next;
       }
       t->next = v->next;
       v->next = t;
   }
}

void add_pos(char opt, struct node **p) {
   int idx = 0, elem, found = 0;
   struct node *v;

   if(*p == NULL) {
      printf("Linked list empty!\n");
   }
   else {
      printf("Enter relative element: ");
      scanf("%d", &elem);

      v = *p;
      do {
          if(v->value != elem && found == 0) {
             idx++;
          }
          else {
             found = 1;
          }
          v = v->next;
      } while (v != *p);

      if(found == 0) {
         printf("Element not found!\n");
      }

      else if(opt == 'a') {
         idx += 1;
         add_node(idx, p);
         printf("New Node: ");
         display(*p);
      }

      else if(opt == 'b') {
         add_node(idx, p);
         printf("New Node: ");
         display(*p);
      }

   }
}

int main() {
   int opt;
   struct node *head = NULL;

   for(;;) {
      printf("=== Choose option ===\n");
      printf("1 = Append\n");
      printf("2 = Display\n");
      printf("3 = Remove end\n");
      printf("=====================\n");
      printf("4 = Add begining\n");
      printf("5 = Remove begining\n");
      printf("=====================\n");
      printf("6 = remove before\n");
      printf("7 = remove after\n");
      printf("=====================\n");
      printf("8 = Add before\n");
      printf("9 = Add after\n");
      printf("=====================\n");
      printf("10 = exit\n");
      printf("=====================\n");

      scanf("%d", &opt);
      system("clear");

      switch(opt) {
         case 1:
           append(&head);
           break;
         case 2:
           display(head);
           break;
         case 3:
           rem_end(&head);
           break;
         case 4:
           add_bg(&head);
           break;
         case 5:
           delete_node(0, &head);
           break;
         case 6:
           remove_pos('b', &head);
           break;
         case 7:
           remove_pos('a', &head);
           break;
         case 8:
           add_pos('b', &head);
           break;
         case 9:
           add_pos('a', &head);
           break;
         case 10:
           printf("Exiting....");
           exit(1);

         default:
           printf("Invalid option!\n");
      }
   }

   return 0;
}
