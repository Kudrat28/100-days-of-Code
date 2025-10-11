// Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns : \n");
    scanf("%d %d", &rows, &cols);    

    int matrix[rows][cols];
    int sum = 0;

    printf("Enter the matrix : \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];     
        }
    }

    printf("%d\n", sum);             

    return 0;
}

/*Enter number of rows and columns : 
2 3
Enter the matrix : 
1 2 3
4 5 6
21
*/
