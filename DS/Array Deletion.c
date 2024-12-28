#include <stdio.h>

int main() 
{
    // Maximum array size is assumed to be 100
    int array[100]; 
    int n, position;

    // Input the size of the array
    printf("Enter the number of elements in the array (maximum 100): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    // Input the position of the element to delete
    printf("Enter the position of the element to delete (0-based indexing): ");
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position >= n) 
    {
        printf("Invalid position. Element cannot be deleted.\n");
    } 
    else 
    {
        // Shift elements to the left to fill the gap created by deleting the element
        for (int i = position; i < n - 1; i++) 
        {
            array[i] = array[i + 1];
        }
        
        // Decrease the size of the array
        n--; 

        // Print the updated array
        printf("Array after deleting the element:\n");
        for (int i = 0; i < n; i++) 
        {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
