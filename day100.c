#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    // Pointer pointing to structure
    ptr = &s;

    // Modify values using pointer
    printf("Enter Student details (Name Roll Marks): ");
    scanf("%s %d %f", ptr->name, &ptr->roll, &ptr->marks);

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.0f",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
