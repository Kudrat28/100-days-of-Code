// Read and print a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter number of rows and cols : ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];


    printf("Enter matrix elements : \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            printf("%d ", matrix[i][j]);
        }
        printf("\n");  
    }

    return 0;
}

/*Enter number of rows and cols : 2 3
Enter matrix elements : 
1 2 3
4 5 6

1 2 3 
4 5 6
*/

