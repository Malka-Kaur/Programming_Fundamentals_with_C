/* Problem Statement: Comparing Two Numbers Without Conditional Statements
A bank’s internal tool needs to find out which of two account balances is higher, but the program cannot use any conditional statements (like if, else, or ternary operators).
Write a C program that:
Takes two account balances as input (float).
Uses relational and logical operators to determine:
Whether both balances are equal.
Whether the first balance is greater than the second.
Whether the second balance is greater than the first.
Displays the results as 1 (True) or 0 (False) for each condition */



#include <stdio.h>
int main() {
    float balance1, balance2;

    // Input two balances
    printf("Enter first account balance: ");
    scanf("%f", &balance1);

    printf("Enter second account balance: ");
    scanf("%f", &balance2);

    // Conditions
    int Equal = (balance1 == balance2);
    int FirstGreater = (balance1 > balance2);
    int SecondGreater = (balance2 > balance1);


    // Output results
    printf("\n--- Comparison Results ---\n");
    printf("Both balances equal: %d\n", Equal);
    printf("First balance greater: %d\n", FirstGreater);
    printf("Second balance greater: %d\n", SecondGreater);

    return 0;
    
}

