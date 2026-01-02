// Write a C program to search for a given number in an array using linear search.



#include <stdio.h>

int main() {
    int n, num, found = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("Enter number to search: ");
    scanf("%d", &num);
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            printf("%d found at position %d.\n", num, i + 1);
            found = 1;
            break;
        }
    }
    
    if(!found) printf("%d not found in the array.\n", num);
    
    return 0;
}