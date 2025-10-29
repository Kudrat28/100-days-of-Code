// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // frequency array for a-z
    int i;
    char firstRepeat = '\0';

    printf("Enter a string: ");
    gets(str);  // (unsafe; use fgets in modern compilers)

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;  // increase frequency
            if (freq[str[i] - 'a'] == 2) {  // found first repeat
                firstRepeat = str[i];
                break;
            }
        }
    }

    if (firstRepeat != '\0')
        printf("First repeating lowercase alphabet: %c\n", firstRepeat);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}

/*Enter a string: stress
First repeating lowercase alphabet: s
*/
