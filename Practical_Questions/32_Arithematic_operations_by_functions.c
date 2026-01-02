//Write a C program that performs addition, subtraction, multiplication, and division of two numbers using a function with call by reference.


#include <stdio.h>

// Function using call by reference to update multiple results
void calculate(float a, float b, float *add, float *sub, float *mul, float *div) {
    *add = a + b;
    *sub = a - b;
    *mul = a * b;
    if (b != 0)
        *div = a / b;
    else
        *div = 0; // Handled to avoid division by zero
}

int main() {
    float n1, n2, sum, diff, prod, quotient;
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    // Passing addresses of result variables
    calculate(n1, n2, &sum, &diff, &prod, &quotient);

    printf("Addition: %.2f\n", sum);
    printf("Subtraction: %.2f\n", diff);
    printf("Multiplication: %.2f\n", prod);
    printf("Division: %.2f\n", quotient);

    return 0;
}