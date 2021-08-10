// program to find union of two arrays
// also takes care of duplicate elements inside
// same array.
#include<stdio.h>


// func to sort the array
// [in] [2,6,7,3,4,8]
// [out] [2,3,4,6,7,8]
void sort_arr(int arr[], int len) {
   int i, j, t;
   for(i=0;i<len;i++) {
      for(j=i+1;j<len;j++) {
          if(arr[j] < arr[i]) {
             t = arr[i];
             arr[i] = arr[j];
             arr[j] = t;
          }
      }
  }
}

// func to remove duplications from array
// [in] [1,2,2,3,4,4,5]
// [out] [1,2,3,4,5]
int remove_duplications(int arr[], int len) {
   int i, j, temp;
   //iterate through each element
   for(int i=0; i<len-1; i++){
      //compare it with all elements on right
      for(int j=i+1; j<len; j++){
         if(arr[i] == arr[j]){
         /*
         shift duplicate element to the last,
         by swapping it with array[len]
         */
         temp = arr[j];
         arr[j] = arr[len-1];
         arr[len-1] = temp;
         //reduce size of the array
         len--;
         }
      }
   }
   return len;
}

// func to print union of two arrays
// [in] [1,2,2,6,7,5,,8,3] & [3,4,6,2,8,7,1]
// [out] [1,2,3,4,5,6,7,8]
void make_union(int arr1[], int arr2[], int m, int n) {
     int uarr[m + n], uidx=0, i, j, found;

     // sort both arrays
     sort_arr(arr1, m);
     sort_arr(arr2, n);

     // remove duplications from both arrays
     m = remove_duplications(arr1, m);
     n = remove_duplications(arr2, m);

     // copy array 1 in temp
     for(i=0;i<m;i++) {
        uarr[i] = arr1[i];
        uidx++;
     }
     for(j=0;j<n;j++) {
        // check if elemets doesn't already
        // exists before adding in union array
        found = 0;
        for(i=0;i<m;i++) {
           if(arr1[i] != arr2[j] && found != 1) {
              uarr[uidx] = arr2[j];
              uidx++;
              found = 1;
           }
        }
     }

     // finally print the union
     for(j=0;j<i;j++) {
        printf("%d ", uarr[j]);
     }
}


// driver func
void main() {
   int arr1[10], arr2[10], i;
   printf("Enter 10 elements for first array: ");
   for(i=0;i<10;i++) {
      scanf("%d", &arr1[i]);
   }
   printf("\nEnter 10 elements for second array: ");
   for(i=0;i<10;i++) {
      scanf("%d", &arr2[i]);
   }
   make_union(arr1, arr2, 10, 10);
}
