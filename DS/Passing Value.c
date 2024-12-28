#include<stdio.h>
int main()
{
    int x,y,z;
    x=20,y=30;
    z= add(x,y);
    printf("the addition of two numbers %d + %d is %d",x,y,z);
    return 0;
}
int add(int a, int b)
{
    int c = a + b;
    return (c);
}