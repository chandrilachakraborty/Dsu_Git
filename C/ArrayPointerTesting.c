#include <stdio.h>
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int *ptr = arr;
    printf("%p\n", &arr[0]);
    printf("%d\n", *(arr + 2));
    printf("%d\n", arr[3]);
    printf("%d\n", &*(arr + 0));
    int brr[] = {9, 8, 7, 6, 5};
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of pointer to the first elements of the array is %d\n",&ptr);
    printf("The address of first element of the array is %d\n", *(&arr));
    printf("The address of first element of the array is %d\n", ptr);
    printf("The address of first element of the array is %d\n", &arr);
    printf("The address of first element of the array is %d\n", arr);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of first element of the array is %d\n", arr + 0);
    printf("The address of first element of the array is %d\n", ptr + 0);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array is %d\n", arr + 1);
    printf("The address of second element of the array is %d\n", ptr + 1);
    printf("\n");
    printf("The value at address of first element of the array is %d\n", *ptr);
    printf("The value at address of first element of the array is %d\n", *(arr));
    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of first element of the array is %d\n", *(ptr + 0));
    printf("The value at address of second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of second element of the array is %d\n", *(arr + 1));
    printf("The value at address of second element of the array is %d\n", arr[1]);

    return 0;
}