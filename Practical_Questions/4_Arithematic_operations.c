#include <stdio.h>

int main() {
    int num1, num2, sum, difference, product, modulus_result;
    float division_result; 
    // Use float for division to handle decimals

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Type casting for accurate floating-point division

    division_result = (float)num1 / num2; 
    modulus_result = num1 % num2;

    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction: %d - %d = %d\n", num1, num2, difference);
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);
    printf("Division: %d / %d = %.2f\n", num1, num2, division_result);
    printf("Modulus: %d %% %d = %d\n", num1, num2, modulus_result);

    return 0;
}