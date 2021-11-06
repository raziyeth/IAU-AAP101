#include <stdio.h>

int main () {
    
    int sum = 0;
    int a;

    do {
        printf("Enter a : ");
        scanf("%d",&a);
        sum = sum + a;
        printf("Current Sum = %d \n", sum);
    }
    while (a != -1);

    
    printf("Final Sum = %d \n", sum);

    return(0);
}
