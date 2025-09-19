// Write a program to display the month name and number of days using switch-case for a given month number..

#include <stdio.h>
int main() {
int n;
printf("Enter the month number : ");
scanf("%d",&n);

switch(n) {
case 1:
printf("January , 30 days\n");
break;
case 2:
printf("February , 28 days\n");
break;
case 3:
printf("March , 30 days\n");
break;
case 4:
printf("April , 31 days\n");
break;
case 5:
printf("May , 30 days\n");
break;
case 6:
printf("June , 31 days\n");
break;
case 7:
printf("July , 30 days\n");
break;
case 8:
printf("August , 31 days\n");
break;
case 9:
printf("September , 30 days\n");
break;
case 10:
printf("October , 31 days\n");
break;
case 11:
printf("November , 30 days\n");
break;
case 12:
printf("December , 31 days\n");
break;
default:
printf("Invalid input\n");
}
return 0;
}

//output
//Enter the month number : 2
//February , 28 days
//Enter the month number : 12
//December , 31 days

