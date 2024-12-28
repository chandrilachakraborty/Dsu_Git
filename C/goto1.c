#include <stdio.h>
int main()
{
    int pin, balance=5000, withamt;
    const int PIN = 1234;
    int choice;
enter_pin:
    printf("Enter Pin: ");
    scanf("%d", &pin);
    if (pin != PIN)
    {
        printf("Incorrect pin. Please try again.\n");
        goto enter_pin;
    }
menu:
    printf("Choose Action:\n");
    printf("1. Withdraw\n2. Check Balance\n3. Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        printf("Enter the amount to withdraw: ");
        scanf("%d", &withamt);
        if (withamt <= balance)
        {
            balance = balance - withamt;
            printf("Transaction successful. Available balance: %d\n", balance);
        }
        else
        {
            printf("Insufficient balance.\n");
        }
        goto menu;
        case 2:
        printf("Available balance: %d\n", balance);
        goto menu;
        case 3:
        printf("Thank you for using our service.\n");
        break;
        default:
        printf("Invalid choice. Try again!\n");
        goto menu;
    }
return 0;
}