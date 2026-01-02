#include <stdio.h>

int main() {
    int choice;

    // Displaying the menu to the user
    printf("Select a color number:\n");
    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Green\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Using switch statement to check the input
    switch(choice) {
        case 1:
            printf("\nAction: Red -> Stop\n");
            break;
        case 2:
            printf("\nAction: Yellow -> Ready\n");
            break;
        case 3:
            printf("\nAction: Green -> Go\n");
            break;
        default:
            printf("\nInvalid choice! Please enter 1, 2, or 3.\n");
    }

    return 0;
}