#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    // for(int i=n;i>0;i--)
    // {
    //     for (j=1;j<n-i+2;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    for (int i=0;i<n;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    // for(int i=0;i<n;i++)
    // {
    //     for(j=1;j<n-i+1;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    for(i=0;i<n;i++)
    {
        for (j=0;j<n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}