#include <stdio.h>
int main()
{
    int guess,num=6;
    int status;
    try_again:
    printf("Guess a number between 1 and 10: ");
    status=scanf("%d",&guess);
    if (status!=1)
    {
        printf("Invalid input! Please enter a valid integer.\n");
        while (getchar() != '\n');
        goto try_again;
    }

    if (guess<1 || guess>10)
    {
        printf("Invalid guess... Guess the number in the given range!\n");
        goto try_again;
    }
    if (guess==num)
    {
        printf("Congratulations...You guess the right number!");
    }
    else
    {
            printf("Wrong guess...Please try again!\n");
        goto try_again;
    }
    return 0;
}