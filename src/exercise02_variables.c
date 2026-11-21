/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Malisa Grace Mandao
 * Registration Number: ENB211-0039/2025
 *
 * Instructions:
 *   - Declare and initialise one int, one float, one double and one char.
 *   - Use meaningful variable names.
 *   - Display each value with the correct printf format specifier.
 */

#include <stdio.h>

int main(void)
{
    int labNumber = 1;
    float unitPrice = 45.50f;
    double tankCapacityLiters = 1250.75;
    char gradeSection = 'A';

    printf("Lab number: %d\n", labNumber);
    printf("Unit price: %.2f\n", unitPrice);
    printf("Tank capacity (liters): %.2f\n", tankCapacityLiters);
    printf("Section: %c\n", gradeSection);

    return 0;
}