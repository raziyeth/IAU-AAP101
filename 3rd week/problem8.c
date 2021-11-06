#include <stdio.h>

int main () {
    int i = 1000;
    int S = 0;
    
    printf("i = %d \n", i);


    for (i = 1; i <= 2000; i = i+2)
    {
        printf("%d \t", i);
        S = S + i;

    }

    printf("S = %d ", S);

   return(0);
}
