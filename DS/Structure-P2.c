#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int regNumber;
    long long mobile;
};

int main() 
{
    // Declare an array of structure variables with size 100
    struct Student students[100];

    // Assign values to the first student in the array
    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", students[0].name); // Assuming no spaces in the name
    printf("Register Number: ");
    scanf("%d", &students[0].regNumber);
    printf("Mobile Number: ");
    scanf("%lld", &students[0].mobile);

    // Print the values of the first student
    printf("\nStudent 1 Details:\n");
    printf("Name: %s\n", students[0].name);
    printf("Register Number: %d\n", students[0].regNumber);
    printf("Mobile Number: %lld\n", students[0].mobile);

    return 0;
}

