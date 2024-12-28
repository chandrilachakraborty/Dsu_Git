#include <stdio.h>
int b=35; //this is a global variable
int func(int b1)
{
    printf("The value of b is %d",b);
    return b1*10;
}
int main()
{
    int b=344;
    int loc=89; //we can't print this in main function because this is a local vatriable of the function
    printf("The value of b inside main is %d\n",b);
    printf("The address of b inside main is %d\n",&b);
    int val=func(b);
    printf("\nThe value of a is %d",val);
    return 0;
}