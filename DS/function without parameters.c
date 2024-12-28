#include <stdio.h>

int getNumber() {
    return 42;
}

int main() {
    int num = getNumber(); // storing return value in variable
    printf("Number: %d\n", num);
    return 0;
}
