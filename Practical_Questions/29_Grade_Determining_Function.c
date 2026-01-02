#include <stdio.h>

// Function to determine grade
char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 75) return 'B';
    else if (avg >= 50) return 'C';
    else return 'F';
}

int main() {
    int subjects;
    float marks, total = 0, average;

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    for (int i = 1; i <= subjects; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &marks);
        total += marks;
    }

    average = total / subjects;

    printf("\n--- Result ---\n");
    printf("Total Marks: %.2f\n", total);
    printf("Average:     %.2f\n", average);
    printf("Grade:       %c\n", calculateGrade(average));

    return 0;
}