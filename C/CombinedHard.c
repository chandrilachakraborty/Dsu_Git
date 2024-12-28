#include <stdio.h>
int main()
{
    char option;
    double temp, convTemp;

    retry:

    printf("Enter the temperature(C for Celsius, F for Fahrenheit): ");
    scanf("%c", &option);

    if(option=='C' || option=='c')
    {
        printf("Enter the temperature: ");
        scanf("%lf",&temp);
        convTemp=(temp*9/5)+32;
        printf("%.2lf from Celsius in Fahrenheit is %.2lf.",temp,convTemp);
    }
    else if (option=='F' || option=='f')
    {
        printf("Enter the temperature: ");
        scanf("%lf",&temp);
        convTemp=(temp-32)*5/9;
        printf("%.2lf from fahrenheit in Celsius is %.2lf.",temp,convTemp);
    }
    else
    {
        printf("Invalid option. Please try again!");
        goto retry;
    }
    return 0;
}