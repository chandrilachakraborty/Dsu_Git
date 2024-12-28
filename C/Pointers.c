#include <stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    int *ptr3=NULL;
    int *ptr5;
    int b=19;
    int *str=&b;
    printf("Value of a is %d\n",a);
    printf("value of a is %d\n",*ptr);
    printf("Address of pointer to a is %p\n",&ptr);
    printf("Address of a is %p\n",&a);
    printf("address of a is %p\n",ptr);
    printf("The value of some garbage is %p\n",ptr5);
    printf("The value of some null pointer is %p\n",ptr3);
    printf("Address of a is %p\n",str);
    return 0;
}