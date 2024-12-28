#include <stdio.h>
int main()
{
    float n;
    int change;
    printf("Enter an integer: ");
    scanf("%f",&n);
    printf("Before typecasting: %f",n);
    change=(int)n;
    printf("\nAfter typecasting: %d",change);
}