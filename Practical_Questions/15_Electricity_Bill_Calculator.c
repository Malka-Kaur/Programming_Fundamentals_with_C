#include <stdio.h>

int main() {
    float units, total_amt, surcharge, final_bill;

    // Input units consumed
    printf("Enter total units consumed: ");
    scanf("%f", &units);

    // Calculate bill amount based on slabs
    if(units <= 50) {
        total_amt = units * 0.50;
    }
    else if(units <= 150) {
        total_amt = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if(units <= 250) {
        total_amt = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else {
        total_amt = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Calculate 20% surcharge
    surcharge = total_amt * 0.20;
    final_bill = total_amt + surcharge;

    // Output the results
    printf("\n--- Electricity Bill ---\n");
    printf("Units Consumed: %.2f\n", units);
    printf("Base Amount:    $%.2f\n", total_amt);
    printf("Surcharge (20%%): $%.2f\n", surcharge);
    printf("Total Payable:  $%.2f\n", final_bill);

    return 0;
}