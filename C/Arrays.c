#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[]={6,7,8,9};
    int crr[5];
    for (int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("Enter the number you want in array: ");
        scanf("%d",&crr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",crr[i]);
    }
    printf("\n");
    for(int i=0;i<4;i++)
    {
        printf("%d ",brr[i]);
    }
    printf("\n");
    int abc[][4]={{1,2,3,4},{5,6,7,8}};
    for (int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ", abc[i][j]);
        }
        printf("\n");
    }
    return 0;
}