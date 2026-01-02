#include <stdio.h>

int main() {
    int choice = -1, num, i;

    while(choice != 0) {
        printf("\n1. Multiplication Table\n0. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter number: ");
            scanf("%d", &num);
            for(i = 1; i <= 10; i++) printf("%d x %d = %d\n", num, i, num * i);
        }
    }
    return 0;
}