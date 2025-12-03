#include <stdio.h>
#include <string.h>

// Structure definition
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter Student1 details (Name Roll Marks): ");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);

    // Input for second student
    printf("Enter Student2 details (Name Roll Marks): ");
    scanf("%s %d %f", s2.name, &s2.roll, &s2.marks);

    // Compare structures
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {
        printf("Same");
    } else {
        printf("Not Same");
    }

    return 0;
}
