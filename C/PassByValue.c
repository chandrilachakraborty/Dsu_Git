//Example of Pass By Value
#include <stdio.h>
void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int damn(int x , int y)
{
    int e = x+y;
    return e;
}
int main()
{
    int a=10,b=20;
    printf("value before swapping: a = %d and b = %d\n",a,b);
    swap(a,b);
    printf("value after swapping: a = %d and b = %d\n",a,b);
    int c=5,d=10;
    int e = damn(c,d);
    printf("value of e is %d",e);
    return 0;
}