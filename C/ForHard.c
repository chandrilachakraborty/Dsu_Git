#include <stdio.h>
int main()
{
    int n, n1 = 0, n2 = 1, next_turn;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n == 1)
        printf("Fibonacci Series: %d", n1);
    else if (n == 2)
        printf("Fibonacci Series: %d,%d", n1, n2);
    else
    {
        printf("Fibonacci Series: %d,%d", n1, n2);
        for (int i = 3; i <= n; i++)
        {
            next_turn = n1 + n2;
            printf(",%d", next_turn);
            n1 = n2;
            n2 = next_turn;
        }
        printf("\n");
    }
    return 0;
}