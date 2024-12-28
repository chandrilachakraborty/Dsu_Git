#include <stdio.h>
int main()
{
    int num;
    do{
        printf("Enter a number: ");
        scanf("%d", &num);
    }while(num<0);
    printf("You entered: %d", num);
    return 0;
}