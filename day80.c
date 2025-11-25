#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll, marks;
    char name[50];

    // Write records
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks: ");
        scanf("%s %d %d", name, &roll, &marks);

        // Writing record using fprintf
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // Read records
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    // Reading using fscanf
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
