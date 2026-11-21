/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Malisa Grace Mandao
 * Registration Number: ENB211-0039/2025
 * Variant ID: V19
 * Scenario: Study Hours
 *
 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.
 */

#include <stdio.h>

int main(void)
{
    int hoursPerDay = 3;
    int daysInWeek = 7;

    int totalStudyHours = hoursPerDay * daysInWeek;

    printf("Total study hours: %d\n", totalStudyHours);

    return 0;
}

Expected Output:

Total study hours: 21