//Add two matrix..

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    
    // Input size of first matrix
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    
    int matrix1[10][10], matrix2[10][10], sum[10][10];

    // Input elements of first matrix
    for (int i = 0; i < rows1; i++) {
        printf("Enter elements of row %d of first matrix: ", i + 1);
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input size of second matrix
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if matrices can be added
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added (different sizes).\n");
        return 0;
    }

    // Input elements of second matrix
    for (int i = 0; i < rows2; i++) {
        printf("Enter elements of row %d of second matrix: ", i + 1);
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print result
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*Enter number of rows and columns of first matrix: 2 2
Enter elements of row 1 of first matrix: 1 2
Enter elements of row 2 of first matrix: 3 4
Enter number of rows and columns of second matrix: 2 2
Enter elements of row 1 of second matrix: 5 6
Enter elements of row 2 of second matrix: 7 8

Sum of the two matrices:
6 8 
10 12
*/
