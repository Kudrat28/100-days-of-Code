// Print the initials of a name.

#include <stdio.h>

int main() {
    char name[100];
    printf("Enter a name : ");
    gets(name);

    printf("Initials : ");

    if (name[0] != ' ')
    printf("%c.", name[0]);

    for (int i=0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            printf("%c.", name[i+1]);
        }
    }
    printf("\n");
    return 0;

}

/*Enter a name : Doe John
Initials : D.J.
*/