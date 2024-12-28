#include <stdio.h>
void revarr(int arr[])
{
    int temp;
    for (int i = 0; i < 4; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}
int printarr(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("Element at %d is %d\n", i, arr[i]);
    }
    return 0;
}
int userinp(int user[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &user[i]);
    }
    printf("\n");
    return 0;
}
int main()
{
    int arr[7];
    userinp(arr);
    printarr(arr);
    revarr(arr);
    printf("After reversal:\n");
    printarr(arr);
    return 0;
}