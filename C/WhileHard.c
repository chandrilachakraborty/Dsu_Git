#include <stdio.h>
int main()
{
    int n,isprime=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n<=1)
    {
        printf("Not a prime number.");
        return 0;
    }
    int i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
        i++;
    }
    if(isprime)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    return 0;
}