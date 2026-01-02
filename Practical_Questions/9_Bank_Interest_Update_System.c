/*Problem Statement: Bank Interest Update System
A bank wants to develop a simple program to update a customer’s account balance using
assignment operators.
Write a C program that performs the following operations:
1. Takes the customer’s initial account balance as input.
2. Adds interest amount (using +=) to the balance.
3. Deducts annual maintenance charge (using - =) from the balance.
4. Multiplies the balance by a bonus factor (using *=) to reward loyal customers.
5. Divides the balance equally among two linked accounts (using /=).
6. Finally, displays the updated balance after each operation.
*/


#include <stdio.h>

int main() {
    float balance, interest, maintenance, bonusFactor;

    printf("Enter the initial account balance: ");
    scanf("%f", &balance);

    printf("Enter the interest amount to add: ");
    scanf("%f", &interest);

    printf("Enter the annual maintenance charge: ");
    scanf("%f", &maintenance);

    printf("Enter the bonus factor: ");
    scanf("%f", &bonusFactor);

    printf("\n--- Account Update Process ---\n");

    // Adding interest amount (using +=) to the balance
    balance += interest; // 
    printf("Balance after adding interest: %.2f\n", balance); // 

    // Deducting annual maintenance charge (using -=) from the balance
    balance -= maintenance; // 
    printf("Balance after deducting maintenance charge: %.2f\n", balance); // 

    // Multiplying the balance by a bonus factor (using *=)
    balance *= bonusFactor; // 
    printf("Balance after applying bonus factor: %.2f\n", balance); // 

    // Dividing the balance equally among two linked accounts (using /=)
    balance /= 2; // 
    printf("Final balance in each of the two linked accounts: %.2f\n", balance); // 

    return 0;