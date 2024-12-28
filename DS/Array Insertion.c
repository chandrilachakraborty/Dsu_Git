#include <stdio.h>
int main() 
{
    
    // Maximum array size is assumed to be 100
    int array[100]; 
    int n, element, position;

    // Input the size of the array
    printf("Enter the number of elements in the array (maximum 100): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    // Input the element to be inserted
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Input the position where the element should be inserted
    printf("Enter the position to insert the element (0-based indexing): ");
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position > n) 
    {
        printf("Invalid position. Element cannot be inserted.\n");
    } 
    else 
    {
        // Shift elements to the right to make space for the new element
        for (int i = n; i > position; i--) 
        {
            array[i] = array[i - 1];
        }

        // Insert the element at the specified position
        array[position] = element;
        n++; // Increase the size of the array

        // Print the updated array
        printf("Array after inserting the element:\n");
        for (int i = 0; i < n; i++) 
        {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
