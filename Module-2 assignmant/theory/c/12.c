//  Q 12.  Write a C program to create a file, write a string into it, close the file,
//   then open the file again to read and display its contents.

#include <stdio.h>

int main() 
{
    FILE *fp;
    char str[] = "Hello! This is a sample file content.";
    char ch;

    // Step 1: Create and open file for writing
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    // Step 2: Write string to file
    fputs(str, fp);
    fclose(fp);  // Step 3: Close the file

    // Step 4: Reopen file for reading
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Step 5: Read and display contents
    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);  // Close the file again

    return 0;
}
