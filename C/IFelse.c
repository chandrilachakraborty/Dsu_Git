#include <stdio.h>
int main()
{
    char science, maths;
    printf("Enter the exam status of science (pass/fail): ");
    scanf("%c", &science);
    printf("\nEnter the exam status of maths (pass/fail): ");
    scanf(" %c", &maths);
    if (science == 'p' && maths == 'p')
    {
        printf("students who passed in both subjects wuill receive gift of 45 INR.");
    }
    else if (science == 'p' && maths == 'f')
    {
        printf("students who passed in science will receive gift of 15 INR.");
    }
    else if (science == 'f' && maths == 'p')
    {
        printf("students who passed in maths will receive gift of 15 INR.");
    }
    else
    {
        printf("students who failed in both subjects will receive gift of 0 INR.");
    }
    return 0;
}