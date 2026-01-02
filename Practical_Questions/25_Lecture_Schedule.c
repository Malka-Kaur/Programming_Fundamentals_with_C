#include <stdio.h>

int main() {
    int day;

    printf("Enter Day Number (1-Monday to 6-Saturday): ");
    scanf("%d", &day);

    printf("\n--- Schedule ---\n");
    switch(day) {
        case 1: printf("Monday: Mathematics & Physics\n"); break;
        case 2: printf("Tuesday: Chemistry & Lab Work\n"); break;
        case 3: printf("Wednesday: Computer Science & English\n"); break;
        case 4: printf("Thursday: Data Structures & Math\n"); break;
        case 5: printf("Friday: Electronics & Workshop\n"); break;
        case 6: printf("Saturday: Personality Development & Library\n"); break;
        default: printf("Invalid input! Enter 1 to 6.\n");
    }

    return 0;
}