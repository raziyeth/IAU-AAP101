#include <stdio.h>

int main () {
   int f;
   int c;
   
   printf("Enter Temperature in fahrenheit : ");
   scanf("%d",&f);

   c = (f-32) * 5/9;

   printf("Temperature in Celsius = %d \n", c);
   return(0);
}
