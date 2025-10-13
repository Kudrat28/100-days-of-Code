//Multiply two matrices...

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input dimensions of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Matrix multiplication rule: columns of first == rows of second
    if (c1 != r2) {
        printf("Matrix multiplication not possible. (Columns of A ≠ Rows of B)\n");
        return 0;
    }

    int a[10][10], b[10][10], result[10][10];

    // Input first matrix
    printf("\nEnter elements of first matrix (A):\n");
    for (int i = 0; i < r1; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix (B):\n");
    for (int i = 0; i < r2; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output the result matrix
    printf("\nResultant Matrix (A × B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*Enter rows and columns of first matrix: 2 3
Enter rows and columns of second matrix: 3 2 

Enter elements of first matrix (A):
Row 1: 1 2 3
Row 2: 4 5 6

Enter elements of second matrix (B):
Row 1: 7 8
Row 2: 9 10
Row 3: 11 12

Resultant Matrix (A ├ù B):
58 64
139 154
*/
