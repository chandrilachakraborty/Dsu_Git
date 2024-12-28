#include <stdio.h>

int main() 
{
    // Maximum array size is assumed to be 100
    int array[100]; 
    int n, key, found = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array (maximum 100): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    // Input the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Linear search
    for (int i = 0; i < n; i++) 
    {
        if (array[i] == key) 
        {
            found = 1;
            printf("Element %d found at index %d.\n", key, i);
            break; // Exit the loop once the element is found
        }
    }

    if (!found) 
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
