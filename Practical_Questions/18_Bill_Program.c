#include <stdio.h>

int main() {
    float price, total = 0;
    int i;

    printf("--- Shopkeeper's Billing System ---\n");

    // Loop to input prices for 5 items
    for(i = 1; i <= 5; i++) {
        printf("Enter the price of item %d: ", i);
        scanf("%f", &price);
        
        total += price; 
    }

    // Final output using the Rupee symbol
    printf("-----------------------------------\n");
    printf("Total Bill Amount: ₹%.2f\n", total);
    printf("-----------------------------------\n");

    return 0;
}