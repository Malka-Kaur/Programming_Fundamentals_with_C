#include <stdio.h>

int main() {
    float units, total = 0;
    
    printf("--- Weekly Electricity Tracker ---\n");
    for(int i = 1; i <= 7; i++) {
        printf("Enter units for day %d: ", i);
        scanf("%f", &units);
        total += units;
    }
    
    printf("\nTotal Weekly Consumption: %.2f units\n", total);
    return 0;
}