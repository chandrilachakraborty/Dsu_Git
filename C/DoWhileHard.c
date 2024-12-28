#include <stdio.h>
int main()
{
    int choice;
    float bal=1000,deposit,withdraw;
    do{
        printf("\nMENU\n1. Deposit\n2. Withdraw\n3. Check balance\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("\nEnter the amount to deposit: ");
                scanf("%f", &deposit);
                bal += deposit;
                break;
            case 2:
                printf("\nEnter the amount to withdraw: ");
                scanf("%f", &withdraw);
                if(withdraw>bal)
                    printf("\nInsufficient balance");
                else
                    bal -= withdraw;
                break;
            case 3:
                printf("\nYour balance: %f", bal);
                break;
            case 4:
            printf("\nExiting...");
            break;
            default:
            printf("invalid choice!\n");
        }
    }while(choice!=4);
    return 0;
}