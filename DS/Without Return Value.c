#include <stdio.h>

void displaySum(int a, int b) {
    int sum = a + b;
    printf("Sum: %d\n", sum);
}

int main() {
    displaySum(5, 10); // calling the function with arguments
    return 0;
}
