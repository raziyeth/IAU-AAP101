#include <stdio.h>

int main () {
   int A,B,C;


   printf("Enter A : ");
   scanf("%d",&A);

   printf("Enter B : ");
   scanf("%d",&B);

    if (A>B){
        C = A;
    }

    if (B>A){
        C = B;
    }
    
   printf("C = %d \n", C);
   return(0);
}
