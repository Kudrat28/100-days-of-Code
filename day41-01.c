// Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    
    // Read entire line (including spaces)
    fgets(str, sizeof(str), stdin);

    // Count characters manually until '\0' (string terminator)
    while (str[count] != '\0') {
        count++;
    }

    // fgets includes '\n' at the end unless buffer is full — ignore it
    if (count > 0 && str[count - 1] == '\n')
        count--;

    printf("Number of characters: %d\n", count);

    return 0;
}

/*Enter a string: Hello
Number of characters: 5
*/
