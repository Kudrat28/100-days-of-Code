// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char *word;
    char longest[50];
    int maxLen = 0;

    printf("Enter a sentence: ");
    gets(str);  // (unsafe, but fine for practice)

    // Split the sentence into words using spaces
    word = strtok(str, " ");
    while (word != NULL) {
        int len = strlen(word);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);  // copy current word as longest
        }
        word = strtok(NULL, " ");  // move to next word
    }

    printf("Longest word: %s\n", longest);
    return 0;
}

/*Enter a sentence: i love programming
Longest word: programming
*/
