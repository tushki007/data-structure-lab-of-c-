include <stdio.h>

#define MAX 10  // Maximum size of the matrix

void inputMatrix(int matrix[MAX][MAX], int rows, int cols, char name) {
    printf("Enter elements of matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

// Matrix Addition
void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] + B[i][j];
}

// Matrix Subtraction
void subtractMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] - B[i][j];
}

// Matrix Multiplication
void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
    }
}

// Transpose of a Matrix
void transposeMatrix(int A[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[j][i] = A[i][j];
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int rows, cols, choice;

    printf("Enter the number of rows and columns for matrices: ");
    scanf("%d %d", &rows, &cols);

    inputMatrix(A, rows, cols, 'A');
    inputMatrix(B, rows, cols, 'B');

    printf("\nChoose an operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose of A\n5. Transpose of B\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            addMatrices(A, B, result, rows, cols);
            printf("Resultant Matrix after Addition:\n");
            printMatrix(result, rows, cols);
            break;
        case 2:
            subtractMatrices(A, B, result, rows, cols);
            printf("Resultant Matrix after Subtraction:\n");
            printMatrix(result, rows, cols);
            break;
        case 3:
            multiplyMatrices(A, B, result, rows, cols, cols);
            printf("Resultant Matrix after Multiplication:\n");
            printMatrix(result, rows, cols);
            break;
        case 4:
            transposeMatrix(A, result, rows, cols);
            printf("Transpose of Matrix A:\n");
            printMatrix(result, cols, rows);
            break;
        case 5:
            transposeMatrix(B, result, rows, cols);
            printf("Transpose of Matrix B:\n");
            printMatrix(result, cols, rows);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
