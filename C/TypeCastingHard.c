#include <stdio.h>
int main()
{
    char alpha[6];
    int sum=0;
    printf("Enter 5 characters.\n");
    for(int i=0;i<5;i++)
    {
       scanf("\n%s",&alpha[i]);
       sum+=(int)alpha[i];
    }
    printf("The ASCII value of the string is: %d",sum);
    return 0;
}