#include <stdio.h>

int main () {
   int A,B,C;
   int max;


   printf("Enter A : ");
   scanf("%d",&A);

   printf("Enter B : ");
   scanf("%d",&B);

   printf("Enter C : ");
   scanf("%d",&C);

    if ( (A>=B) && (A>=C) ){
        max = A;
    }

    if ( (B>=A) && (B>=C) ){
        max = B;
    }
 
     if ( (C>=A) && (C>=C) ){
        max = C;
    }
    
   printf("max = %d \n", max);
   return(0);
}
