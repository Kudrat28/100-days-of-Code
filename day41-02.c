// Print each character of a string on a new line.


#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input (including spaces)

    printf("\nCharacters in the string are:\n");

    // Loop through each character until string ends
    while (str[i] != '\0') {
        if (str[i] != '\n')  // skip the newline added by fgets
            printf("%c\n", str[i]);
        i++;
    }

    return 0;
}

/*Enter a string: Hi

Characters in the string are:
H
i
*/
