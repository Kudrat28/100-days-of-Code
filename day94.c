#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that accepts structure as parameter
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll: ");
    scanf("%d", &s.roll);
    printf("Marks: ");
    scanf("%d", &s.marks);

    display(s);   // Passing structure to function

    return 0;
}
