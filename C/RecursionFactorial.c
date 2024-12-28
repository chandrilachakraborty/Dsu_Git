#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number*factorial(number-1)); 
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("the factorial of %d = %d", num,factorial(num));
}