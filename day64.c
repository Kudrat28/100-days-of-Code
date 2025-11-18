#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int visited[256] = {0}; 
    int start = 0;
    int maxLen = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        while (visited[(unsigned char)c] == 1) {
            visited[(unsigned char)s[start]] = 0;
            start++;
        }

        visited[(unsigned char)c] = 1;

        int currLen = i - start + 1;
        if (currLen > maxLen) maxLen = currLen;
    }

    printf("%d\n", maxLen);
    return 0;
}


    
    

