#include <stdio.h>
int main()
{
    int numbers[10];
    int count=0,choice,num,i;
    char ch;
    while(1)
    {
        printf("\nMenu\n");
        printf("1. Add a number\n2. Display all numbers\n3. Find the largest number.\n4. Find the smallest number\n5. Exit\n");
        printf("Enter your choice: ");
        if(scanf("%d",&choice)!=1)
        {
            printf("Invalid choice. Enter a valid number!\n");
            while((ch=getchar())!='\n' && ch!=EOF);
            continue;
        }

        switch(choice)
        {
            case 1:
            if(count<10)
            {
                printf("Enter a number: ");
                scanf("%d",&num);
                numbers[count]=num;
                count++;
            }
            else 
            {
                printf("The list is full. Try emptying the list.");
            }
            break;
            case 2:
            if(count>0)
            {
                printf("The numbers are: ");
                for(i=0;i<count;i++)
                {
                    printf("%d ",numbers[i]);
                }
            }
            else
            {
                printf("The list is empty.");
            }
            break;
            case 3:
            if (count==0)
            printf("The list is empty, no larger number available.\n");
            else
            {
                int largest=numbers[0];
                for(i=1;i<count;i++)
                {
                    if(numbers[i]>largest)
                    {
                        largest=numbers[i];
                    }
                }
                printf("The Largest number is %d",largest);
            }
            break;
            case 4:
            if(count==0)
            printf("The list is empty, no smaller number available.\n");
            else
            {
                int smallest=numbers[0];
                for(i=1;i<count;i++)
                {
                    if(numbers[i]<smallest)
                    {
                        smallest=numbers[i];
                    }
                }
            }
            break;
            case 5:
            printf("Exiting the program.\n");
            return 0;
            default:
            printf("Invalid choice. Please try again!\n");
        }
    }
    return 0;
}