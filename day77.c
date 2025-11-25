#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    // Open input file
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    // Open output file
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error opening output.txt!\n");
        fclose(in);
        return 1;
    }

    // Read each character and convert to uppercase
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion complete! Output written to output.txt\n");

    return 0;
}
