//1

#include <stdio.h>

int main() {
    // Define the size of the 2D array
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Declare the 2D array
    int array[rows][columns];

    // Input values into the 2D array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    // Display the 2D array
    printf("\nEntered 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}


//2

#include <stdio.h>

int main() {
    // Define the order of the matrices
    int n;

    printf("Enter the order of the matrices (n x n): ");
    scanf("%d", &n);

    // Declare the matrices
    int matrix1[n][n], matrix2[n][n], sumMatrix[n][n], productMatrix[n][n];

    // Input values for the first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input values for the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the matrices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Multiply the matrices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            productMatrix[i][j] = 0;
            for (int k = 0; k < n; k++) {
                productMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the sum matrix
    printf("\nSum of the matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    // Display the product matrix
    printf("\nProduct of the matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", productMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


//3


#include <stdio.h>

int main() {
    // Define the dimensions of the matrix
    int m, n;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);

    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Check if the matrix is square
    if (m != n) {
        printf("The matrix must be square for diagonal summation.\n");
        return 1; // Exit the program with an error code
    }

    // Declare the matrix
    int matrix[m][n];

    // Input values for the matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the sum of diagonal elements
    int diagonalSum = 0;
    for (int i = 0; i < m; i++) {
        diagonalSum += matrix[i][i];
    }

    // Display the matrix
    printf("\nEntered matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the sum of diagonal elements
    printf("\nSum of diagonal elements: %d\n", diagonalSum);

    return 0;
}


//4


#include <stdio.h>

int main() {
    // Define the dimensions of the matrix
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    // Declare the matrix
    int matrix[m][n], transpose[n][m];

    // Input values for the matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the transpose of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Display the original matrix
    printf("\nOriginal matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the transpose of the matrix
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//5


#include <stdio.h>

int main() {
    // Define the dimensions of the matrix
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    // Declare the matrix
    int matrix[m][n];

    // Input values for the matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums
    printf("\nRow sums:\n");
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, rowSum);
    }

    // Calculate column sums
    printf("\nColumn sums:\n");
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, colSum);
    }

    return 0;
}
