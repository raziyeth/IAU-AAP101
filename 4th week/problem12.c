#include <stdio.h>

int main () {
   int n;
   int i = 1;
   int sum = 0;
   
   printf("Enter N : ");
   scanf("%d",&n);


    for (i; i < n; i++)
    {
        sum = sum + i;
        printf("%d \t", i);
    }

   printf("Sum = %d \n", sum);
   return(0);
}
