//  Q 10.   Write a C program that takes two strings from the user and concatenates them using strcat(). 
//  Display the concatenated string and its length using strlen().

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];

    // Input two strings
    printf("Enter the first string: ");
    gets(str1);  // Note: gets() is unsafe, consider using fgets() in real applications

    printf("Enter the second string: ");
    gets(str2);

    // Concatenate strings using strcat
    strcat(str1, str2);

    // Display the result
    printf("\nConcatenated String: %s\n", str1);

    // Get and display length using strlen
    int length = strlen(str1);
    printf("Length of the concatenated string: %d\n", length);

    return 0;
}
