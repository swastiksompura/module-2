//    Q 4. Write a C program to check if a number is even or odd using an if-else statement.
//     Extend the program using a switch statement to display the month name based on the user’s 
//     input (1 for January, 2 for February, etc.).

#include <stdio.h>
int main() {
    int number;

    // Part 1: Check Even or Odd
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number %d is Even.\n", number);
    } else {
        printf("The number %d is Odd.\n", number);
    }

    // Part 2: Display Month Name using Switch
    printf("\nEnter a number (1 to 12) to get the month name: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("Month: January\n");
            break;
        case 2:
            printf("Month: February\n");
            break;
        case 3:
            printf("Month: March\n");
            break;
        case 4:
            printf("Month: April\n");
            break;
        case 5:
            printf("Month: May\n");
            break;
        case 6:
            printf("Month: June\n");
            break;
        case 7:
            printf("Month: July\n");
            break;
        case 8:
            printf("Month: August\n");
            break;
        case 9:
            printf("Month: September\n");
            break;
        case 10:
            printf("Month: October\n");
            break;
        case 11:
            printf("Month: November\n");
            break;
        case 12:
            printf("Month: December\n");
            break;
        default:
            printf("Invalid month number. Please enter a number from 1 to 12.\n");
            break;
    }

    return 0;
}
