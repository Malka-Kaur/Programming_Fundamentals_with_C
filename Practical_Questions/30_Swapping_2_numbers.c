// Write a C program that uses a user-defined function to swap two numbers using call by reference. 
// The function should take the addresses of the variables as parameters and modify their values.


#include <stdio.h>

// Function taking addresses as parameters [cite: 50]
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp; // Modifying values through addresses [cite: 50]
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Before Swap: x = %d, y = %d\n", x, y);
    swap(&x, &y); // Passing the addresses of variables 
    printf("After Swap: x = %d, y = %d\n", x, y);

    return 0;
}