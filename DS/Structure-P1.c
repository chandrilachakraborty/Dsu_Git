#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int regNumber;
    long long mobile;
};

int main() 
{
    // Declare two structure variables
    struct Student student1, student2;

    // Assign values to the first student
    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name); // Assuming no spaces in the name
    printf("Register Number: ");
    scanf("%d", &student1.regNumber);
    printf("Mobile Number: ");
    scanf("%lld", &student1.mobile);

    // Assign values to the second student
    printf("\nEnter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name); // Assuming no spaces in the name
    printf("Register Number: ");
    scanf("%d", &student2.regNumber);
    printf("Mobile Number: ");
    scanf("%lld", &student2.mobile);

    // Print the values of both students
    printf("\nStudent 1 Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Register Number: %d\n", student1.regNumber);
    printf("Mobile Number: %lld\n", student1.mobile);

    printf("\nStudent 2 Details:\n");
    printf("Name: %s\n", student2.name);
    printf("Register Number: %d\n", student2.regNumber);
    printf("Mobile Number: %lld\n", student2.mobile);

    return 0;
}
