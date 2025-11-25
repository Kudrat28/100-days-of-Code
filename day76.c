#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char line[200];

    // Ask for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    fp = fopen(filename, "r");

    // If file doesn't exist
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    // If file exists
    printf("File opened successfully.\n");
    printf("----- File Content -----\n");

    // Read and display file content line by line
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
