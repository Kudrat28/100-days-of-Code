#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];

    // Read data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Print table header
    printf("\n----- Student Details -----\n");
    printf("Name\tRoll\tMarks\n");
    printf("---------------------------\n");

    // Print student details
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
