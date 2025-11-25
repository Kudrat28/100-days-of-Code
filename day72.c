#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Opening file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    // Reading file line by line until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Closing file
    fclose(fp);

    return 0;
}
