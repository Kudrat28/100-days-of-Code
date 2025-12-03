#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;   // nested structure
};

int main() {
    struct Employee e;

    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", e.name);

    printf("ID: ");
    scanf("%d", &e.id);

    printf("Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           e.name, e.id,
           e.join.day, e.join.month, e.join.year);

    return 0;
}
