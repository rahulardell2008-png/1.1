#include <stdio.h>

int main() {
    float gross_salary, allowances = 0, deductions = 0, net_salary;
    int number;
    float gross_sales, discount = 0, net_sales;
    float marks1, marks2, marks3, total, average;

    // 1. Net Salary Calculation
    printf("Enter gross salary: ");
    scanf("%f", &gross_salary);

    if (gross_salary > 10000) {
        allowances = 0.10 * gross_salary;
        deductions = 0.03 * gross_salary;
    } else if (gross_salary > 5000) {
        allowances = 0.07 * gross_salary;
        deductions = 0.02 * gross_salary;
    }

    net_salary = gross_salary + allowances - deductions;
    printf("Net Salary = %.2f\n\n", net_salary);

    // 2. Divisibility Check by 7
    printf("Enter a number to check if divisible by 7: ");
    scanf("%d", &number);

    if (number % 7 == 0) {
        printf("%d is divisible by 7.\n\n", number);
    } else {
        printf("%d is NOT divisible by 7.\n\n", number);
    }

    // 3. Net Sales Calculation
    printf("Enter gross sales: ");
    scanf("%f", &gross_sales);

    if (gross_sales > 20000) {
        discount = 0.15 * gross_sales;
    } else if (gross_sales > 10000) {
        discount = 0.10 * gross_sales;
    } else {
        discount = 0.05 * gross_sales;
    }

    net_sales = gross_sales - discount;
    printf("Net Sales = %.2f\n\n", net_sales);

    // 4. Marks, Average and Grade
    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);

    total = marks1 + marks2 + marks3;
    average = total / 3;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);

    if (marks1 < 35 || marks2 < 35 || marks3 < 35) {
        printf("Result: Fail (Scored less than 35 in one or more subjects)\n");
    } else if (average >= 70) {
        printf("Grade: Distinction\n");
    } else if (average >= 60) {
        printf("Grade: First Class\n");
    } else if (average >= 50) {
        printf("Grade: Second Class\n");
    } else if (average >= 35) {
        printf("Grade: Third Class\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}
