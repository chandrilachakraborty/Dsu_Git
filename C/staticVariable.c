#include <stdio.h>
int func1( int b)
{
    static int a = 10;
    printf("the value of a is %d\n",a);
    a++;
    return a+1;
}
int main()
{
    int a=2;
    int val=func1(a);
    val=func1(a);
    val=func1(a);
    val=func1(a);
    val=func1(a);
    return 0;
}