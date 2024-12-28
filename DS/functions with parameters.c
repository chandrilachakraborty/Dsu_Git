#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(5, 6); // storing return value
    printf("Product: %d\n", result);
    return 0;
}
