# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** Malisa Grace Mandao
- **Registration Number:** ENB211-0039/2025
- **Programme:** B.Sc. Agricultural and Biosystems Engineering
- **GitHub Username:**  gracemandao204-a11y
- **Assigned Scenario:** Study Hours
- **Variant ID:** V19
- **Date:** November 21, 2026

## 2. Objectives

Set up and verify a C programming environment using Code::Blocks and the GCC compiler.

Write, compile, and run basic C console programs using printf() and escape sequences such as \n.

Understand core C program structure, including preprocessor directives, main(), statements, braces, and return values.

Declare and initialize variables of fundamental C data types (int, float, double, char) and print them using appropriate format specifiers.

Implement a personalised arithmetic calculation (3 * 7 = 21) with clear labeling and submit work cleanly via GitHub.

## 3. Software and Hardware Environment

- **Operating System:**  Windows 11 Pro
- **IDE:** Code::Blocks version 25.03
- **Compiler:** GCC GNU Compiler via code::blocks
- **Hardware:** HP EliteBook 845 G8 Notebook PC

## 4. Code::Blocks Installation and Configuration

Installed Code::Blocks (with MinGW GCC toolchain) and confirmed that the build toolchain points to the GCC compiler and debugger paths under Settings -> Compiler. Verified compilation by building a sample source file and checking for zero build errors.

## 5. Hello Kioto Implementation

In Exercise 1 (Hello Kioto), printf() from <stdio.h> outputs the initial greeting and a second line introducing your programme, with \n (newline escape sequence) placing each message on its own line. Testing individual edits—such as changing the greeting, removing a semicolon to observe a build error, removing \n to see line concatenation, and adding a third printf() line—verified how statements and escape sequences behave.

Code:

/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 01: Hello Kioto
 *
 * Student Name: Malisa Grace Mandao
 * Registration Number: ENB211-0039/2025
 *
 * Instructions:
 *   - Include stdio.h.
 *   - Implement main().
 *   - Print "Hello, Kioto!".
 *   - Print a second line introducing your programme or course.
 *   - Return 0.
 */

#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am studying BSc. Agricultural and Biosystems Engineering.\n");

    return 0;
}

Expected Output:

Hello, Kioto!
I am studying BSc. Agricultural and Biosystems Engineering.

## 6. Explanation of C Program Structure

#include <stdio.h>: A preprocessor directive that includes the standard input/output header so declarations such as printf() are available before compilation.

int main(void): The entry point function where program execution begins; void specifies no command-line parameters are expected, and int indicates an integer status code is returned.

Braces ({ and }): Delimit the block of statements belonging to main().

Statements (;): Individual instructions such as printf(...) end with a semicolon so the compiler recognizes statement boundaries.

return 0;: Ends main() and returns 0 to the operating system to indicate successful execution.

## 7. Variables and Data Types

In Exercise 2, variables were declared with descriptive names and matching format specifiers in printf():

int (%d): Whole numbers, such as labNumber = 1.

float (%.2f or %f): Single-precision floating-point values (such as unitPrice = 45.50f), formatted to two decimal places with %.2f.

double (%.2f): Double-precision floating-point values (such as tankCapacityLiters = 1250.75) for higher decimal precision.

char (%c): Single characters enclosed in single quotes, such as gradeSection = 'A'.

## 8. Personalised Calculation

In Exercise 3 (Personalised Calculation), the program declares two integer inputs for Variant ID: V19 under the Study Hours scenario (3 study hours per day for 7 days), multiplies them using * to compute weekly hours, stores the result in totalStudyHours, and prints it with the required output label (Total study hours: 21).

Variant ID: V19

Scenario: Study Hours (calculating weekly study hours for a student studying daily before exams)

Input Values: 3 hours per day and 7 days per week

Operation: Multiplication (3 * 7)

Result: 21 printed under the label Total study hours: 21

Code:

/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Malisa Grace Mandao
 * Registration Number: ENB211-0039/2025
 * Variant ID: V19
 * Scenario: Study Hours
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

## 9. Testing and Troubleshooting

Each program was saved, compiled, and executed to verify expected output:

Missing semicolon: Removing ; at the end of a printf() statement caused a syntax/compile error (such as expected ';' before ...); restoring ; resolved the build error.

Missing newline (\n) or slash direction: Omitting \n kept subsequent output or shell prompts on the same line, while /n printed literally instead of creating a line break.

Type and specifier alignment: Matching %d for int and %.2f for floating-point values ensured clean, readable output.
## 10. GitHub Workflow

Fork: Forked the laboratory repository to your GitHub account.

Branch: Created a working branch (such as lab-01-enb211-0039-2025) from the main branch.

Commits: Committed completed C source files and report updates with clear commit messages.

Pull Request: Pushed the branch to GitHub and opened a pull request targeting the upstream repository.

## 11. Screenshots

Code::Blocks 25.03 Workspace (picture 1.png): Shows the Kioto_C_Lab01 workspace and project open in Code::Blocks 25.03 with the Sources folder visible in the Management pane.  
Initial Hello Kioto Code in Editor (picture 2.png): Shows main.c inside Kioto_C_Lab01 printing "Hello, Kioto!\n" and "I am learning the C programming language.\n", along with execution details in the Build log.  
Initial Hello Kioto Console Output (picture 3.png): Shows the console window displaying Hello, Kioto! and I am learning the C programming language. on separate lines (Process returned 0 (0x0)).  
Modified Greeting Code (picture 4.png): Shows main.c updated to "Greetings Koito!\n" in Code::Blocks 25.03 with the Build log showing execution of Kioto_C_Lab01.exe.  
Modified Greeting Console Output (picture 5.png): Shows the console output printing Greetings Koito! followed by I am learning the C programming language. (Process returned 0 (0x0)).  
Three-Line Programme Code (picture 6.png): Shows main.c with "Greetings Koito!/n", "I am learning the C programming language.\n", and a third line printing "My programme is BSc. Agricultural and Biosystems Engineering.\n".  
Three-Line Output & /n Behavior (picture 7.png): Shows Greetings Koito!/nI am learning the C programming language. joined on the first line due to the forward slash /n instead of \n, followed by My programme is BSc. Agricultural and Biosystems Engineering. on the second line.  
Variant V19 Study Hours Code (picture 8.png): Shows main.c declaring hoursPerDay = 3, daysInWeek = 7, totalStudyHours = hoursPerDay * daysInWeek, and printing "Total study hours: %d\n".  
Variant V19 Study Hours Console Output (picture 9.png): Shows the console output printing Total study hours: 21 (Process returned 0 (0x0)).   

## 12. Individual Reflection

What I learned: How C programs are structured, how printf() format specifiers and escape sequences control output, and how syntax errors surface during compilation.

What was difficult: Keeping strict attention to small syntax details like semicolons, quotes, slash direction (\n vs /n), and matching types with format specifiers.

What I will do differently next time: Compile frequently after small edits, check compiler warnings carefully, and keep screenshots and Git commits organized as each exercise is completed.

## 13. Conclusion

Laboratory 01 established a working C development environment and covered foundational programming concepts—program structure, printf() formatting, data types, arithmetic computation, testing/debugging, and version control submission—through Exercises 1 to 3 and Variant V19.