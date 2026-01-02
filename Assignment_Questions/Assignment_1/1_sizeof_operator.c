#include <stdio.h>

int main() {
    // Declaring and initializing variables 
    int integerVar = 10;
    float floatVar = 10.5f;
    char charVar = 'A';
    double doubleVar = 20.99;

    // Printing values and sizes using sizeof [cite: 4]
    printf("Value of int: %d, Size: %zu bytes\n", integerVar, sizeof(integerVar));
    printf("Value of float: %.2f, Size: %zu bytes\n", floatVar, sizeof(floatVar));
    printf("Value of char: %c, Size: %zu byte\n", charVar, sizeof(charVar));
    printf("Value of double: %.2lf, Size: %zu bytes\n", doubleVar, sizeof(doubleVar));

    return 0;
}