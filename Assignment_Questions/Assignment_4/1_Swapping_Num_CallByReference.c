#include <stdio.h>

// Function taking addresses as parameters 
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &x, &y);

    printf("Before: x = %d, y = %d\n", x, y);
    swapNumbers(&x, &y); // Passing addresses [cite: 50]
    printf("After: x = %d, y = %d\n", x, y);

    return 0;
}