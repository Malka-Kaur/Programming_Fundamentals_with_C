// C program to read 5 integers into an array and print them.


#include <stdio.h>

int main() {
    int arr[5];
    
    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The elements in the array are: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}