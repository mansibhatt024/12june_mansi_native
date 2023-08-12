// WAP to take two Array input from user and sort them in ascending ordescending order as per user’s choice
#include <stdio.h>
int main (){
   int num[20];
   int i, j, a, n;
   printf("enter number of elements in an array");
   scanf("%d", &n);
   printf("Enter the elements");
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("\nThe numbers in ascending order is: ");
   for (i = 0; i < n; ++i){
      printf(" %d", num[i]);
   }
    printf("\nThe numbers in descending order is: ");
     for (i = n - 1; i >= 0; --i){
      printf(" %d", num[i]);
   }
    
   printf("\n");
   return 0;
}

