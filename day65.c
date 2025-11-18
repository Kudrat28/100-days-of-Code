#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int freq[26] = {0};  // frequency table for lowercase a-z

    scanf("%s", s);
    scanf("%s", t);

    // If lengths differ → not anagram
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    // Increase frequency for s, decrease for t
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}

/*
anagram
nagaram
Anagram
*/