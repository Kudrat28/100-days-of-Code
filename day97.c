#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp1, emp2;
    FILE *fp;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp1.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp1.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp1.salary);

    // Open file in write binary mode
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 0;
    }

    // Write structure to file
    fwrite(&emp1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n\n");

    // Open file in read binary mode
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 0;
    }

    // Read structure from file
    fread(&emp2, sizeof(struct Employee), 1, fp);

    // Display employee data
    printf("Employee Data Read From File:\n");
    printf("ID     : %d\n", emp2.id);
    printf("Name   : %s\n", emp2.name);
    printf("Salary : %.2f\n", emp2.salary);

    fclose(fp);

    return 0;
}
