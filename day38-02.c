//Check if a matrix is symmetric....

#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Symmetric matrix must be square
    if (rows != cols) {
        printf("Matrix is not symmetric (not square).\n");
        return 0;
    }

    int matrix[10][10];
    
    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        printf("Enter elements of row %d separated by spaces: ", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    int symmetric = 1; // assume symmetric
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0; // not symmetric
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

/*Enter elements of row 1 separated by spaces: 1 2
Enter elements of row 2 separated by spaces: 2 1
True
*/
