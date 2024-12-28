#include <stdio.h>
int main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d",&score);

    if (score>100 || score<0)
    {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
    }
    else if ( score >=90)
    printf("Grade A");
    else if (score >=80)
    printf("Grade B");
    else if (score >=70)
    printf("Grade C");
    else if (score >=60)

    printf("Grade D");
    else
    printf("Grade F (Fail).");
}