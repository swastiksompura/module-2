#include <stdio.h>

// Function to input a matrix
void inputMatrix(int matrix[10][10], int rows, int cols, char name) 
{
    printf("\nEnter elements of Matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) 
    {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < cols; j++)
         {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int rows, int cols, const char* title)
 {
    printf("\n%s (%dx%d):\n", title, rows, cols);
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
         {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[10][10], int B[10][10], int result[10][10],
                      int r1, int c1, int r2, int c2)
                       {
    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            result[i][j] = 0;

    // Multiply logic
    for (int i = 0; i < r1; i++)
     {
        for (int j = 0; j < c2; j++)
         {
            for (int k = 0; k < c1; k++)
             {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
 {
    int A[10][10], B[10][10], result[10][10];
    int r1, c1, r2, c2;
    char choice;

    do
     {
        // Input matrix sizes
        printf("\n===== MATRIX MULTIPLICATION PROGRAM =====\n");
        printf("Enter rows and columns for Matrix A: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter rows and columns for Matrix B: ");
        scanf("%d %d", &r2, &c2);

        // Validate multiplication condition
        if (c1 != r2)
         {
            printf("\nERROR: Cannot multiply! Columns of A must match rows of B.\n");
        }
         else 
        {
            // Input and display matrices
            inputMatrix(A, r1, c1, 'A');
            inputMatrix(B, r2, c2, 'B');

            displayMatrix(A, r1, c1, "Matrix A");
            displayMatrix(B, r2, c2, "Matrix B");

            // Multiply and display result
            multiplyMatrices(A, B, result, r1, c1, r2, c2);
            displayMatrix(result, r1, c2, "Resultant Matrix (A x B)");
        }

        // Ask if user wants to repeat
        printf("\nDo you want to multiply another set of matrices? (Y/N): ");
        scanf(" %c", &choice);

    } 
    while (choice == 'Y' || choice == 'y');

    printf("\nThank you for using the program. Goodbye!\n");


}
