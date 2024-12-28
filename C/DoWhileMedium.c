#include <stdio.h>
int main()
{
    int num, fact=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i=1;
    do{
        fact=fact*i;
        i++;
    }while(i<=num);
    printf("The factorial of %d is %d.",num,fact);
}