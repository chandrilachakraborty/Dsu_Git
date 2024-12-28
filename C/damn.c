#include <stdio.h>
#include <stdlib.h>  // For exit function

int main() {
    int guess, number = 7;
    int status; // To store the return value of scanf

    while (1) {
        printf("Guess a number between 1 and 10: ");
        status = scanf("%d", &guess);

        // Check if input is valid
        if (status != 1) {
            printf("Invalid input! Please enter a valid integer.\n");
            while (getchar() != '\n');  // Clear the input buffer
            continue;
        }

        // Check if input is within valid range
        if (guess < 1 || guess > 10) {
            printf("Invalid input! Please guess a number between 1 and 10.\n");
            continue;
        }

        // Check if the guess is correct
        if (guess == number) {
            printf("Congratulations! You guessed it right.\n");
            break;  // Exit the loop when the correct number is guessed
        } else {
            printf("Wrong guess, try again.\n");
        }
    }

    return 0;
}
