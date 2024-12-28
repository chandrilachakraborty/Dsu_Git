#include <stdio.h>
int main()
{
    int fact=1;
    for (int i=5; i>0;i--)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}