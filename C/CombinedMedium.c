#include <stdio.h>
int main()
{
    int choice;
    double balance=1000.00;
    double deposit, withdraw;

    do{
        printf("\nATM Menu");
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
        printf("Your balance is %.2lf", balance);
        break;
        case 2:
        printf("Enter the amount to deposit: ");
        scanf("%lf",&deposit);
        if(deposit>0)
        {
            balance+=deposit;
        }
        else
        {
            printf("Invalid amount to deposit");
        }
        break;
        case 3:
        printf("Enter the amount to withdraw: ");
        scanf("%lf",&withdraw);
        if(withdraw>0 && withdraw<=balance)
        {
            balance-=withdraw;
        }
        else
        {
            printf("Invalid amount to withdraw");
        }
        break;
        case 4:
        printf("Thank you for using ATM\n");
        printf("Exiting...\n");
        break;
        default:
        ("Invalid choice. Please Try again!");
        break;
        }
    }while(choice!=4);
    
    return 0;
}