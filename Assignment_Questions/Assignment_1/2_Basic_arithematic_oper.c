#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2); // 

    // Performing and displaying results 
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Division: %.2f\n", (float)num1 / num2);
        printf("Modulus: %d\n", num1 % num2);
    } else {
        printf("Division and Modulus by zero is not possible.\n");
    }

    return 0;
}