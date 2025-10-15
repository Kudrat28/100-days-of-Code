//Q89: Count frequency of a given character in a string.


#include <stdio.h>

int main() {
    char str[1000], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input (includes spaces)

    printf("Enter character to count: ");
    scanf("%c", &ch);

    // Count occurrences
    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}

/*Enter a string: programming
Enter character to count: g
Frequency of 'g' = 2
*/
