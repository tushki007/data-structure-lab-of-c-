#include <stdio.h>

int main() {
    int sparseMatrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };
    
    int size = 0;
    
    // Count non-zero elements
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (sparseMatrix[i][j] != 0)
                size++;
        }
    }
    
    // Create a compact matrix
    int compactMatrix[3][size];  // 3 rows: (i, j, value)
    int k = 0;
    
    // Populate compactMatrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (sparseMatrix[i][j] != 0) {
                compactMatrix[0][k] = i;               // Row index
                compactMatrix[1][k] = j;               // Column index
                compactMatrix[2][k] = sparseMatrix[i][j];  // Value
                k++;
            }
        }
    }
