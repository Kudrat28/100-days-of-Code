// Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Count letters in first word
    for (i = 0; str1[i] != '\0'; i++)
        count1[str1[i] - 'a']++;

    // Count letters in second word
    for (i = 0; str2[i] != '\0'; i++)
        count2[str2[i] - 'a']++;

    // Compare both counts
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}

/*Enter first string: listen 
Enter second string: silent
Anagrams

*/
