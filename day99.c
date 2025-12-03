#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    // Dynamically allocate memory for structure
    s = (struct Student *)malloc(sizeof(struct Student));

    // Check if memory allocation is successful
    if (s == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    // Input student details
    printf("Enter Student details (Name Roll Marks): ");
    scanf("%s %d %f", s->name, &s->roll, &s->marks);

    // Display student details
    printf("Name: %s | Roll: %d | Marks: %.0f",
           s->name, s->roll, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
