#include <stdio.h>
int main()
{
    int num;
    enter_number:
    printf("Enter a number: ");
    if(scanf("%d",&num)!=1)
    {
        printf("Invalid input...!\n");
        scanf("%*s");
        goto enter_number;
    }
    printf("You entered: %d",num);
    return 0;
}