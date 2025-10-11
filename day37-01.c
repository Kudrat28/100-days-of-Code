// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[10][10];
    int rowSum[10];

    // input matrix with prompts
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        printf("Enter elements of row %d separated by spaces: ", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    // print row sums
    printf("\nSum of each row: ");
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    return 0;
}

/*Enter number of rows: 2
Enter number of columns: 3
Enter elements of row 1 separated by spaces: 1 2 3
Enter elements of row 2 separated by spaces: 4 5 6

Sum of each row: 6 15
*/