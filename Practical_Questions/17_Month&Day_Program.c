#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month) {
        // Months with 31 days
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("Total days: 31\n");
            break;

        // Months with 30 days
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("Total days: 30\n");
            break;

        // February
        case 2:
            printf("Total days: 28 or 29 (Leap Year dependent)\n");
            break;

        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
    }

    return 0;
}