#include <stdio.h>

// Function to calculate factorial and print steps
long long findFactorial(int n) {
    long long fact = 1;
    
    printf("Process: ");
    for (int i = 1; i <= n; i++) {
        fact *= i;
        
        // Print the number
        printf("%d", i);
        
        // Print '*' if it's not the last number, otherwise print '='
        if (i < n) {
            printf(" * ");
        } else {
            printf(" = ");
        }
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative numbers isn't defined.\n");
    } else if (num == 0) {
        printf("Factorial of 0 is 1\n");
    } else {
        long long result = findFactorial(num);
        printf("%lld\n", result);
    }

    return 0;
}