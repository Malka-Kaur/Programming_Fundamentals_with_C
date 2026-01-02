#include <stdio.h>

int main() {
    // Initialize variables
    int intValue = 10;
    float floatValue = 3.14f;
    char charValue = 'A';
    double doubleValue = 123.456;

    // Printing values and sizes
    printf("int value: %d, size: %zu bytes\n", intValue, sizeof(intValue));
    printf("float value: %f, size: %zu bytes\n", floatValue, sizeof(floatValue));
    printf("char value: %c, size: %zu bytes\n", charValue, sizeof(charValue));
    printf("double value: %lf, size: %zu bytes\n", doubleValue, sizeof(doubleValue));

    return 0;
}