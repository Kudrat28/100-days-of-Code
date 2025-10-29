// Remove all vowels from a string..

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);  

    for (i = 0; str[i] != '\0'; i++) {
        // If the character is not a vowel, add it to result
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
              str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
              str[i] == 'O' || str[i] == 'U')) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';  // end the new string

    printf("String after removing vowels: %s\n", result);

    return 0;
}

/*Enter a string: education
String after removing vowels: dctn
*/
