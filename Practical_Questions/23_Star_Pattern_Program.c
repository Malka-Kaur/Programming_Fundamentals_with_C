#include <stdio.h>

int main() {
    int i, j, k;

    // (a) Rectangle: 4 Rows, 7 Columns
    printf("(a) Rectangle:\n");
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 7; j++) printf("*");
        printf("\n");
    }

    // (b) Square: 4 Rows, 4 Columns
    printf("\n(b) Square:\n");
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 4; j++) printf("*");
        printf("\n");
    }

    // (c) Right-Angle Triangle
    printf("\n(c) Right-Angle Triangle:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    // (d) Reverse Right-Angle Triangle
    printf("\n(d) Reverse Right-Angle Triangle:\n");
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    // (e) Central Triangle (Pyramid)
    printf("\n(e) Central Triangle:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++) printf(" "); // Print spaces
        for(k = 1; k <= (2 * i - 1); k++) printf("*"); // Print stars
        printf("\n");
    }

    return 0;
}