#include <stdio.h>

int main() {
    int rows, cols;

    // Get the dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrices
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input elements of the first matrix
    printf("\nEnter elements of matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("\nEnter elements of matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix addition
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result
    printf("\nResultant matrix after addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

