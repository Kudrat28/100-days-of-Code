#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Taking file name from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Opening file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    // Clear input buffer before fgets (optional depending on compiler)
    getchar();

    // Taking new text input from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Appending text to file
    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
