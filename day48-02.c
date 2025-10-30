// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main () {
    char str[100];
    int start=0, end, len;

    printf("Enter a sentence : ");
    gets(str);

    len = strlen(str);

    for (int i=0; i <= len; i++) {
        if ( str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;

            }
            start = i + 1;
        }
    }
    printf("%s", str);
    return 0;
}

/*
Enter a sentence : I love coding
I evol gnidoc
*/