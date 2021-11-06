#include <stdio.h>

int main () {
    
    int sum = 0;
    int first,secound,thrid,forth,fith,sixth;
    

    printf("Enter first test score : ");
    scanf("%d",&first);
    sum = sum + first;
    printf("Enter secound test score : ");
    scanf("%d",&secound);
    sum = sum + secound;
    printf("Enter thrid test score : ");
    scanf("%d",&thrid);
    sum = sum + thrid; 
    printf("Enter forth test score : ");
    scanf("%d",&forth);
    sum = sum + forth; 
    printf("Enter fith test score : ");
    scanf("%d",&fith);
    sum = sum + fith; 
    printf("Enter sixth test score : ");
    scanf("%d",&sixth);
    sum = sum + sixth; 
    
    printf("Sum = %d \n", sum);

    return(0);
}
