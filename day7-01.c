// Write a program to input a year and check whether it is a leap year or not using conditional statements...

#include <stdio.h>
int main () {
int year;
printf("Enter the year : ");
scanf("%d",&year);

if ( year % 4 ==0 && year % 100 != 0 ) {
printf("Leap year\n"); 
}
else if ( year % 400 == 0 ) {
printf("Leap year\n");
}
else {
printf("Not a leap year\n");
}
return 0;
}

//output
//Enter the year : 2020
//Leap year
//Enter the year : 1900
//Not a leap year
//Enter the year : 2000
//Leap year


