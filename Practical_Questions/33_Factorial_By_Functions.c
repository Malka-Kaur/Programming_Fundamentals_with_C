//Write a C program to calculate the factorial of a number using a function that returns the result through call by reference


#include <stdio.h>

// Function that returns result through call by reference
void calculateFactorial(int n, long long *res) {
    *res = 1;
    for (int i = 1; i <= n; i++) {
        *res *= i; // Modifying the value at the address provided
    }
}

int main() {
    int num;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        calculateFactorial(num, &result); // Pass address of result
        printf("Factorial of %d is: %lld\n", num, result);
    }

    return 0;
}