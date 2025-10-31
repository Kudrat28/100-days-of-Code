// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[15];
    char day[3], month[3], year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    // Extract day, month, and year from the input
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    // Convert month number to integer
    int month_num = (month[0] - '0') * 10 + (month[1] - '0');

    // Print in new format
    printf("Output: %s-%s-%s\n", day, months[month_num - 1], year);

    return 0;
}

/*Enter date (dd/mm/yyyy): 28/12/2006
Output: 28-Dec-2006
*/
