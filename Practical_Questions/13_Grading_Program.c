#include <stdio.h>

int main() {
    int marks;

    // Prompt the user to enter marks
    printf("Enter the student's marks: ");

    // Read the marks from the user
    scanf("%d", &marks);

    // Determine and display the grade using conditional logic
    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 75) {
        printf("Grade: B\n");
    } else if (marks >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}