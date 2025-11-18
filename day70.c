#include <stdio.h>
#include <ctype.h>

int main() {
    char str[300];
    fgets(str, sizeof(str), stdin);

    int start = 1;  // indicates start of a word

    for (int i = 0; str[i] != '\0'; i++) {

        if (start && isalpha(str[i])) {
            str[i] = toupper(str[i]);  // capitalise first letter of word
            start = 0;
        }
        else {
            str[i] = tolower(str[i]);  // make all other letters lowercase
        }

        // If we hit a space, the next character begins a new word
        if (str[i] == ' ')
            start = 1;
    }

    printf("%s", str);
    return 0;
}
