#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num<0)
    goto neg;
    printf("The number is positive or zero.");
    return 0;
    neg:
    printf("The number is negative!");
    return 0;
}