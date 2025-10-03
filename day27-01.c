/* Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main() {
    int n = 5;  // number of rows in top half

    // Top half (1,3,5,7,9 stars)
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half (7,5,3,1 stars)
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


