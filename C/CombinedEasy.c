#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms you want: ");
    scanf("%d",&n);

    if (n<1 || n>10)
    {
        printf("Invalid number.");
    }
    else if (n%2==0)
    {
        for (int i=1,count=0;count<n;i++)
        {
            if (i%2==0)
            {
                printf("%d ",i);
                count++;
            }
        }
        printf("\n");
    }
    else 
    {
        for (int i=1,count=0;count<n;i++)
        {
            if (i%2!=0)
            {
                printf("%d ",i);
                count++;
            }
        }
        printf("\n");
    }
    return 0;
}