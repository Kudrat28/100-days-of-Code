// Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200], temp[200];

    printf("Enter first string : ");
    gets(str1);

    printf("Enter second string : ");
    gets(str2);

    if (strlen(str1)  !=  strlen(str2)) {
        printf("No rotation\n");
        return 0;
    }

    strcpy(temp,str1);
    strcat(temp,str1);

    if (strstr(temp,str2) != NULL)
    printf("Rotation\n");
    else
    printf("Not rotation\n");

    return 0;
}

/*Enter first string : abcde 
Enter second string : deabc
Rotation
*/