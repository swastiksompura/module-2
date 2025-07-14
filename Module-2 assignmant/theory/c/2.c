//   Q 2. Write a C program that includes variables, constants, and comments.
//    Declare and use different data types (int, char, float) and display their values?

 #include <stdio.h>  // Preprocessor directive to include standard input-output header
// Define a consta
int main()
 {
    // Declare variables of different types
    int age = 20;             // Integer variable
    char grade = 'A';         // Character variable
    float percentage = 89.5;  // Float (decimal number)
    const pi = 3.14;

    // Display the values of variables and constant
    printf("Student Age      : %d\n", age);
    printf("Student Grade    : %c\n", grade);
    printf("Student Marks    : %.2f%%\n", percentage);  // %% to print % symbol
    printf("Value of PI      : %.5f\n", pi);

    return 0; // End of program
}
