#include <stdio.h>
int main() {
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;

    printf("Size of int: %zu bytes\n", sizeof(intVar));
    printf("Size of float: %zu bytes\n", sizeof(floatVar));
    printf("Size of double: %zu bytes\n", sizeof(doubleVar));
    printf("Size of char: %zu bytes\n", sizeof(charVar));

    return 0;
}