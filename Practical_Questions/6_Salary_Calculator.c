/*                    Problem Statement: Salary Calculation System
A company wants to automate its employee salary calculation process using a C program.
The program should take the following inputs from the user:
Employee name (string)    Basic salary (float)
Using arithmetic operators, calculate and display the following:
House Rent Allowance (HRA) = 20% of basic salary
Dearness Allowance (DA) = 10% of basic salary
Gross Salary = Basic Salary + HRA + DA
Income Tax = 5% of Gross Salary
Net Salary = Gross Salary - Income Tax
Finally, display the employee name, basic salary, HRA, DA, Gross Salary, Income Tax, and Net Salary.
*/

#include <stdio.h>
int main() {
    char name[50];
    float base_salary, HRA, DA, Gross_salary, IncomeTax, net_salary;

    printf("Name of employee: ");
    scanf("%s", name);

    printf("Base salary of the employee: ");
    scanf("%f", &base_salary);

    HRA = 0.2 * base_salary;
    DA = 0.1 * base_salary;
    Gross_salary = base_salary + HRA + DA;
    IncomeTax = 0.05 * Gross_salary;
    net_salary = Gross_salary - IncomeTax;

    printf("\n--- Employee Salary Details ---\n");
    printf("Name of the employee: %s\n", name);
    printf("Base Salary: %.2f\n", base_salary);
    printf("HRA: %.2f\n", HRA);
    printf("DA: %.2f\n", DA);
    printf("Gross Salary: %.2f\n", Gross_salary);
    printf("Income Tax: %.2f\n", IncomeTax);
    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}
