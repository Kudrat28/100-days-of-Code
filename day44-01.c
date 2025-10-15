// Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, special = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input (includes spaces)

    // Traverse each character
    while (str[i] != '\0') {
        char ch = str[i];

        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            ; // skip alphabets
        else if (ch != '\n')
            special++;

        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}

/*Enter a string: a 1b&2
Spaces=1, Digits=2, Special=1
*/
