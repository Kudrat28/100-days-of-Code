// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Traverse the binary string
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary digit!\n");
            return 1;
        }
    }

    printf("1's complement = %s\n", binary);

    return 0;
}

//output
//Enter a binary number: 1010
//1's complement = 0101
//Enter a binary number: 1111
//1's complement = 0000



