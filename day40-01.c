// Q79: Perform diagonal traversal of a matrix.



#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[10][10];

    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        printf("Enter elements of row %d separated by spaces: ", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal traversal of the matrix:\n");

    // Traverse upper diagonals (including main diagonal)
    for (int k = 0; k < cols; k++) {
        int i = 0, j = k;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    // Traverse lower diagonals (excluding main diagonal)
    for (int k = 1; k < rows; k++) {
        int i = k, j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    printf("\n");
    return 0;
}

/*Enter number of rows and columns of the matrix: 3 3
Enter elements of row 1 separated by spaces: 1 2 3
Enter elements of row 2 separated by spaces: 4 5 6
Enter elements of row 3 separated by spaces: 7 8 9

Diagonal traversal of the matrix:
1 2 4 3 5 7 6 8 9 
*/