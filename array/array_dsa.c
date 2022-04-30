#include<stdio.h>
#include<stdlib.h>


void append(int arr[], int *curr, int size) {
     int a_count, i;
     printf("How many elements? ");
     scanf("%d", &a_count);
     if(*curr >= size || a_count > size) {
          printf("Number of elements is greater than array size\n");
     }
     else {
         printf("Enter %d elements: ", a_count);
         for(i=0; i < a_count; i++) {
            *curr += 1;
            scanf("%d", &arr[i]);
            printf("Successfully appended!\n");
         }
     }
}

void pop(int *curr) {
  if(*curr < 0) {
    printf("Array is empty\n");
  }
  else {
     *curr -= 1;
  }
}

void display(int arr[], int *curr) {
   int i;
   if(*curr < 0) {
     printf("Array is empty\n");
   }
   else {
      printf("Array elements: ");
      for(i=0; i <= *curr; i++) {
         printf("%d ", arr[i]);
      }
      printf("\n");
   }
}

void _replace(int arr[], int *curr, int idx, int element) {
   int i;
   for(i=*curr + 1; i>idx; i--) {
       arr[i] = arr[i-1];
   }
   arr[i] = element;
   *curr += 1;
   printf("\nThe New Array is:\n");
   display(arr, curr);
}

int _search(int arr[], int elem, int *curr) {
    int i;
    for(i=0; i<*curr; i++) {
        if(arr[i] == elem) {
           return i;
        }
    }
    return -1;
}

void _delete(int arr[], int *curr, int idx) {
   int i;
   for(i=idx-1; i<*curr-1; i++) {
         arr[i] = arr[i + 1];
   }
   *curr -= 1;
   printf("\nElements of array after delete are : ");
   display(arr, curr);
}

void add_custom_pos(
      char opt,
      int arr[],
      int elem,
      int *curr) {

   int idx, rel_elem;
   printf("Enter relative element: ");
   scanf("%d", &rel_elem);

   if(opt == 'A') {
        idx = _search(arr, rel_elem, curr);
        if(idx != -1) {
           idx++;
           _replace(arr, curr, idx, elem);
         }
      else {
         printf("Element not exists!\n");
      }
   }
   else if(opt == 'B') {
      idx = _search(arr, rel_elem, curr);
      if(idx != -1) {
         _replace(arr, curr, idx, elem);
      }
      else {
         printf("Element not exists!");
      }
   }


}

void rem_custom_pos(
      char opt,
      int arr[],
      int *curr) {

   int idx, rel_elem;
   printf("Enter relative element: ");
   scanf("%d", &rel_elem);

   if(opt == 'A') {
        idx = _search(arr, rel_elem, curr);
        if(idx != -1) {
           idx += 2;
           _delete(arr, curr, idx);
         }
      else {
         printf("Element not exists!\n");
      }
   }
   else if(opt == 'B') {
      idx = _search(arr, rel_elem, curr);
      if(idx != -1) {
         _delete(arr, curr, idx);
      }
      else {
         printf("Element not exists!");
      }
   }


}

void main() {
   int *ptr = NULL;
   int curr = -1;
   int i, size, opt, elem;

   printf("Enter size of array: ");
   scanf("%d", &size);

   ptr = (int*) malloc(size*sizeof(int));

   for(;;) {
       printf("Choose options:\n");
       printf("1 = append\n");
       printf("2 = delete\n");
       printf("3 = display\n");
       printf("4 = Add before\n");
       printf("5 = Add after\n");
       printf("6 = remove before\n");
       printf("7 = remove after\n");
       printf("8 = exit\n");

       scanf("%d", &opt);
       switch(opt) {
         case 1:
           append(ptr, &curr, size);
           break;

         case 2:
           pop(&curr);
           break;

         case 3:
           display(ptr, &curr);
           break;

         case 4:
           printf("Enter element: ");
           scanf("%d", &elem);
           add_custom_pos('B', ptr, elem, &curr);
           break;    

         case 5:
           printf("Enter element: ");
           scanf("%d", &elem);
           add_custom_pos('A', ptr, elem, &curr);
           break;

         case 6:
            rem_custom_pos('B', ptr, &curr);
            break;

         case 7:
            rem_custom_pos('A', ptr, &curr);
            break;     

         case 8:
           exit(1);

       }
   }
}
