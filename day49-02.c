// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int len, lastspace = -1;

    printf("Enter a name : ");
    gets(name);

    len = strlen(name);

    for (int i=0; i < len; i++) {
        if (name[i] == ' ')
        lastspace = i;
    }

    printf("Output : ");

    if (name[0] != ' ')
        printf("%c.", name[0]);


    for (int i=0; i < lastspace; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' )
        printf("%c.", name[i+1]);
    }

    if (lastspace != -1)
    printf(" %s\n", &name[lastspace + 1]);
    return 0;
}

/*Enter a name : John David Doe
Output : J.D. Doe
*/