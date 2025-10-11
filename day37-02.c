//Transpose of a matrix..

#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[10][10], transpose[10][10];

    // input matrix elements
    for (int i = 0; i < rows; i++) {
        printf("Enter elements of row %d separated by spaces: ", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // compute transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // print transpose
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < cols; i++) {        // note: rows and cols swapped
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*Enter number of rows: 2
Enter number of columns: 3
Enter elements of row 1 separated by spaces: 1 2 3
Enter elements of row 2 separated by spaces: 4 5 6

Transpose of the matrix:
1 4 
2 5
3 6
*/
