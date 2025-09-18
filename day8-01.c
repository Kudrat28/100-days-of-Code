// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character....

#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Alphabet\n");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase Alphabet\n");
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } 
    else {
        printf("Special Character\n");
    }

    return 0;
}

//output
//Enter a character: A
//Uppercase Alphabet
//Enter a character: a
//Lowercase Alphabet
//Enter a character: 3
//Digit
//Enter a character: #
//Special Character



