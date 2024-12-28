#include <stdio.h>
int main()
{
    char operator;
    double n1,n2;
    printf("Enter the operator(+,-,*,/): ");
    scanf("%c", &operator);
    printf("Enter the numbers: ");
    scanf("%lf %lf", &n1,&n2);

    switch (operator)
    {
        case '+' :
        printf("%.2lf+%.2lf=%.2lf",n1,n2,n1+n2);
        break;
        case '-' :
        printf("%.2lf-%.2lf=%.2lf",n1,n2,n1-n2);
        break;
        case '*' :
        printf("%.2lf*%.2lf=%.2lf",n1,n2,n1*n2);
        break;
        case '/' :
        if (n2!=0)
        {
            printf("%.2lf/%.2lf=%.2lf",n1,n2,n1/n2);
            break;
        }
        else
        {
            printf("Error! Division by zero");
            break;
        }
        default:
        printf("Error! operator is not correct");
    }
    return 0;
}