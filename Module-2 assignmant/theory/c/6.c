    //  Q 6. Write a C program that uses the break statement to stop printing numbers when it reaches 5.
    //   Modify the program to skip printing the number 3 using the continue statement.

    #include <stdio.h>
int main() {
    int i;

    printf("Printing numbers using break (stops at 5):\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            break;  // Exit loop when i is 5
        }
        printf("%d ", i);
    }

    return 0;
}

// #include <stdio.h>

// int main() {
//     int i;

//     printf("Printing numbers using continue (skip 3):\n");
//     for(i = 1; i <= 10; i++) {
//         if(i == 3) {
//             continue;  // Skip the rest of the loop when i is 3
//         }
//         printf("%d ", i);
//     }

//     return 0;
// }

