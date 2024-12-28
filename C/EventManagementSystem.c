#include <stdio.h>
int main()
{
    int choice,ticket;
    float total=0.0,catgTotal;
    int ticketcount=0;
    char ch;
    start_program:
    while(1)
    {
        printf("\nEvent Management System\n");
        printf("1. Tech Talk ($100 per ticket)\n");
        printf("2. Workshop ($150 per ticket)\n");
        printf("3. Panel Discussion ($200 per ticket)\n");
        printf("4. Display Total Earning\n");
        printf("5. Reset System\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        if(scanf("%d",&choice)!=1){
            printf("Invalid input. Enter a valid number.\n");
            while((ch=getchar())!='\n' && ch!=EOF);
            continue;   
        }
        if (choice==6)
        {
            printf("Exiting the system....\n");
            break;
        }
        switch(choice)
        {
            case 1:
            case 2:
            case 3:
            printf("Enter the number of tickets: ");
            scanf("%d",&ticket);
            if (ticket<=0)
            printf("Invalid ticket number. Must be atleast 1.\n");
            else if(ticket<5)
            printf("Cannot book more than 5 tickets. Please try again!\n");

            if(choice==1)
            {
                catgTotal=ticket*100;
            }
            else if(choice==2)
            {
                catgTotal=ticket*150;
            }
            else
            {
                catgTotal=ticket*200;
            }
            total+=catgTotal;
            ticketcount+=ticket;
            printf("Registered %d tickets. Total for this category: %.2f\n",ticket,catgTotal);
            break;
            case 4:
            if (ticketcount==0)
            {
                printf("No tickets registered yet.");
            }
            else 
            {
                printf("Total earning from all registrations: %.2f",total);
            }
            break;
            case 5:
            total=0.0;
            ticketcount=0;
            break;
            default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}