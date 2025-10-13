// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[10][10];
    
    // Input matrix elements
    for (int i = 0; i < n; i++) {
        printf("Enter elements of row %d separated by spaces: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("\nSum of main diagonal elements: %d\n", sum);

    return 0;
}

/*Enter the size of the square matrix: 3
Enter elements of row 1 separated by spaces: 1 2 3
Enter elements of row 2 separated by spaces: 4 5 6
Enter elements of row 3 separated by spaces: 7 8 9

Sum of main diagonal elements: 15
*/