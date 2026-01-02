// C program to delete an element from a specified position in an array.


#include <stdio.h>

int main() {
    int n, pos;
    
    //Input the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input validation loop for the position
    while (1) {
        printf("\nEnter the position to delete (1 to %d): ", n);
        scanf("%d", &pos);
        
        if (pos >= 1 && pos <= n) {
            // Valid index entered, break the loop
            break; 
        } else {
            printf("ERROR!\nInvalid index! Position must be between 1 and %d.", n);
        }
    }
    
    //Logic to delete the element (source: 36)
    
    
    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    //Reducing the size of the array after deletion (source: 36)
    n--; 
    
    // Updated array
    printf("Array after deletion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
