#include <stdio.h>

int main () {
    int i;
    int n;
    
    printf("Enter N : ");
    scanf("%d",&n);

    for (i = 1; i <= n; i = i+2)
    {
        printf("%d ", i);
    }

   return(0);
}
