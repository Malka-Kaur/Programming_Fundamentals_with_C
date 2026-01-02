#include <stdio.h>

int main() {
    int x = 5, y;

    // Pre-increment: ++x increments first, then assigns to y 
    y = ++x; 
    printf("Pre-increment: x = %d, y = %d\n", x, y);

    x = 5; // Reset x
    // Post-increment: x++ assigns to y first, then increments x 
    y = x++; 
    printf("Post-increment: x = %d, y = %d\n", x, y);

    return 0;
}