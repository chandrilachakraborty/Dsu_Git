#include <stdio.h>
void changevalue();
int main()
{
    int a=235;
    printf("The value of a is %d\n",a);
    changevalue(&a);
    printf("The changed value of a is %d\n",a);
    return 0;
}
void changevalue(int *ptr)
{
    *ptr=786;
    printf("%p\n",&ptr);
}