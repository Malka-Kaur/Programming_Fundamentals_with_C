#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);

    if (num % 2 == 1) { // Corrected condition
        printf("%d is an odd number.", num);
    } else {
        printf("%d is an even number.", num);
    }

    return 0;
}