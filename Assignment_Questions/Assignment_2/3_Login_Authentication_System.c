/*Problem Statement: Login Authentication System
A company wants to develop a simple login authentication system in C.
The system should check whether the entered username and password match the correct ones stored in the system.
Write a C program that:
Stores a predefined username and password (e.g., "admin" and "1234").
Takes username and password as input from the user.
Uses logical operators (&&, ||, !) to check:
If both username and password are correct, display “Login Successful.”
If either username or password is incorrect, display “Invalid Login.”
*/
#include <stdio.h>
#include <string.h>

int main() {
    char correctUsername[] = "KM_123";
    char correctPassword[] = "09876";

    char username[20], password[20];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("\nLogin Successful\n");
    }
    else {
        printf("\nInvalid Login\n");
    }
    return 0;
}
