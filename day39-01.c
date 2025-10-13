// Check if the elements on the diagonal of a matrix are distinct...

#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Diagonal exists only in square matrices
    if (rows != cols) {
        printf("Matrix is not square, so cannot check diagonal.\n");
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

    // Check if diagonal elements are distinct
    int distinct = 1; // assume distinct
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0; // duplicate found
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

/*Enter number of rows and columns of the matrix: 3 3
Enter elements of row 1 separated by spaces: 1 2 3
Enter elements of row 2 separated by spaces: 4 5 6
Enter elements of row 3 separated by spaces: 7 8 1
False
*/