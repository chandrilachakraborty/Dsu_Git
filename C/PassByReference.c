#include <stdio.h>
void Print(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=10,b=20;
    printf("Before swapping a=%d and b=%d\n",a,b);
    Print(&a,&b);
    printf("After swapping a=%d and b=%d\n",a,b);
    return 0;
}