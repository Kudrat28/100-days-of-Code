// Convert a lowercase string to uppercase without using built-in functions.


#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);  // read input (includes spaces)

    // Convert each lowercase letter to uppercase manually
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // difference between 'a' and 'A' in ASCII
        }
        i++;
    }

    printf("Uppercase string: %s", str);
    return 0;
}

/*Enter a lowercase string: hello
Uppercase string: HELLO
*/
