#include <stdio.h>

float findSquare(float n) {
    return n * n;
}

int main() {
    float num;
    printf("Enter a number to square: ");
    scanf("%f", &num);

    printf("Square of %.2f is %.2f\n", num, findSquare(num));
    return 0;
}