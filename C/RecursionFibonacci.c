#include <stdio.h>
int fib(int num)
{
    if (num==1 || num==2)
    {
        return num-1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    printf("Fibonacci Series:\n");
    for (int i = 1; i <= number; i++)
    printf("%d ",fib(i));
    return 0;
}