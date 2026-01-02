// C program to store n numbers in an array and find their sum.


#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    if(n!=0){
        printf("Enter %d numbers:\n", n);
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i]; // Adding each element to sum
        }
    }
    if (n==0){
        printf("\nThe array is empty!\n");
        
    }
    printf("Sum of all elements = %d\n", sum);
    
    return 0;
}