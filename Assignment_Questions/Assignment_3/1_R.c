
#include <stdio.h>
int main() {
    int i, j;
    
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 5; j++) {
            if (j == 0)
                printf("*");
            else if (i == 0 && j < 4)
                printf("*");
            else if (i == 3 && j < 4)
                printf("*");
            else if (j == 4 && i > 0 && i < 3)
                printf("*");
            else if (i - j == 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
