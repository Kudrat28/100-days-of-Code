#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // Taking input from the user
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Opening file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating the file!\n");
        return 1;
    }

    // Writing data to the file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Closing file
    fclose(fp);

    // Confirmation message
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
