#include <stdio.h>
int arithmetic(int *x, int *y)
{
    int sum,diff;
    sum=*x+*y;
    diff=*x-*y;
    *x=sum;
    *y=diff;
    return 0;
}
int main()
{
    int a=5,b=3;
    printf("The value of a is %d and the value of b is %d\n",a,b);
    arithmetic(&a,&b);
    printf("The value of a is %d and the value of b is %d\n",a,b);
    return 0;
}