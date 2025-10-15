// Reverse a string.


#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input (includes spaces)

    // Find string length manually
    while (str[length] != '\0') {
        length++;
    }

    // Remove newline from fgets (if present)
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

/*Enter a string: abcd
Reversed string: dcba
*/
