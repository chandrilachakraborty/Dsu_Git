#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int rev=0, div;
    while(num!=0)
    {
        div=num%10;
        rev=rev*10+div;
        num/=10;
    }
    printf("The reversed number is %d",rev);
}