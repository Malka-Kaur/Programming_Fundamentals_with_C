/*
C program to check whether a given year is a leap year or not.
(A year is a leap year if it is divisible by 4 but not by 100, 
or if it is divisible by 400.)*/


#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if (year%4==0) {
        printf("%d is a leap year", year);
    }
    else if (year%100!=0){
        printf("%d is not a leap year", year);
    }
    else {
        printf("%d is no not a leap year", year);
    }
    return 0;
}