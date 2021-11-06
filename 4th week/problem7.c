#include <stdio.h>

int main () {
   int A,B,C;


   printf("Enter A : ");
   scanf("%d",&A);

   printf("Enter B : ");
   scanf("%d",&B);

   printf("Enter C : ");
   scanf("%d",&C);


    if (A>B){
        if (B>C){
            printf("max = %d \n", C);
        }else{
            printf("max = %d \n", B);
        }
    }
    
    if(A<B){
        if (A>C){
            printf("max = %d \n", A);
        }else{
            printf("max = %d \n", C);
        }
    }

   return(0);
}
