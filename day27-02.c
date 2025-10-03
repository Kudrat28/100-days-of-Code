/*  Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int n = 5;  // height of the top half (including middle)

    // Top half (1,3,5,7,9 stars)
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }
        // stars
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half (7,5,3,1 stars)
    for (int i = n - 1; i >= 1; i--) {
        // spaces
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }
        // stars
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

