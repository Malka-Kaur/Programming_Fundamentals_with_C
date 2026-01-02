//Write a C program to find the maximum of 
// two numbers using a function that accepts pointer arguments.


#include <stdio.h>

// Function that accepts pointer arguments 
int findMax(int *n1, int *n2) {
    if (*n1 > *n2)
        return *n1;
    else
        return *n2;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Passing addresses to the function
    int max = findMax(&a, &b); 
    printf("The maximum number is: %d\n", max);

    return 0;
}