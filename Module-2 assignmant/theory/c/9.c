// Q 9. Write a C program to demonstrate pointer usage.
//  Use a pointer to modify the value of a variable and print the result.

#include <stdio.h>

int main() {
    int num = 10;           // Variable declaration
    int *ptr;               // Pointer declaration

    ptr = &num;             // Assign address of num to pointer

    printf("Original value of num: %d\n", num);

    // Modify value using pointer
    *ptr = 25;

    printf("Modified value of num using pointer: %d\n", num);

    return 0;
}
 