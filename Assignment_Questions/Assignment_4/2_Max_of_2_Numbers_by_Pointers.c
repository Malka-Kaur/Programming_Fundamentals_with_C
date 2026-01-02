#include <stdio.h>

// Function accepting pointer arguments 
int getMax(int *p1, int *p2) {
    if (*p1 > *p2) {
        return *p1;
    } else {
        return *p2;
    }
}

int main() {
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    int max = getMax(&n1, &n2); // 
    printf("The maximum number is: %d\n", max);

    return 0;
}