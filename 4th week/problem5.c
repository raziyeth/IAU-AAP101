#include <stdio.h>
int main () {
   int r;
   double result;
   double pi = 3.14;
   printf("Enter Radius : ");
   scanf("%d",&r);
   result = pi * r * r;
   printf("Area = %f \n", result);
   return(0);
}
