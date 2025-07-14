// Q 3.   Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them.
//  Display the results. 

#include <stdio.h>

int main()
 {
    int num1, num2;

    // Input from user
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition       : %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction    : %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication : %d * %d = %d\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        printf("Division       : %d / %d = %d\n", num1, num2, num1 / num2);
        printf("Modulus        : %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Division and Modulus not possible (division by zero)\n");
    }

    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("%d == %d : %d\n", num1, num2, num1 == num2);
    printf("%d != %d : %d\n", num1, num2, num1 != num2);
    printf("%d > %d  : %d\n", num1, num2, num1 > num2);
    printf("%d < %d  : %d\n", num1, num2, num1 < num2);
    printf("%d >= %d : %d\n", num1, num2, num1 >= num2);
    printf("%d <= %d : %d\n", num1, num2, num1 <= num2);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(%d && %d) : %d\n", num1, num2, (num1 && num2));
    printf("(%d || %d) : %d\n", num1, num2, (num1 || num2));
    printf("!(%d)      : %d\n", num1, !num1);
    printf("!(%d)      : %d\n", num2, !num2);

    return 0;
}
