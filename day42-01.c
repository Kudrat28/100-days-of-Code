// Count vowels and consonants in a string...

#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input (includes spaces)

    // Loop through each character
    while (str[i] != '\0') {
        char ch = str[i];

        // Convert uppercase to lowercase manually
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
        // Check for consonants (only alphabets)
        else if (ch >= 'a' && ch <= 'z')
            consonants++;

        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}

/*Enter a string: Hello
Vowels=2, Consonants=3
*/
