/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/


#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};   // star counts per group
    int size = sizeof(groups) / sizeof(groups[0]);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        if (i < size - 1) {   // add blank line between groups
            printf("\n");
        }
    }

    return 0;
}


