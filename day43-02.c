//Check if a string is palindrome..

#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, i, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string (includes spaces)

    // Find length manually
    while (str[length] != '\0') {
        length++;
    }

    // Remove newline from fgets (if present)
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else 
        printf("Not Palindrome\n");

    return 0;
}

/*Enter a string: madam
Palindrome
*/