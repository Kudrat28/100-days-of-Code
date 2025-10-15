//Q90: Toggle case of each character in a string.


#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces

    while (str[i] != '\0') {
        // If lowercase, convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        // If uppercase, convert to lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("Toggled case string: %s", str);
    return 0;
}

/*
Enter a string: Hello
Toggled case string: hELLO
*/
