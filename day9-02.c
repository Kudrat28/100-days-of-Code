// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 

#include <stdio.h>
int main () {
int perc;
printf("Enter your percentage : ");
scanf("%d",&perc);

if ( perc>=90 && perc<=100 ) {
printf("Grade A\n");
}
else if ( perc>=80 && perc<=89 ) {
printf("Grade B\n");
}
else if ( perc>=70 && perc<=79 ) {
printf("Grade C\n");
}
else if ( perc>=60 && perc<=69 ) {
printf("Grade D\n");
}
else  {
printf("Grade F\n");
}
return 0;
}

//output
//Enter your percentage : 95
//Grade A
//Enter your percentage : 82
//Grade B
//Enter your percentage : 68
//Grade D
//Enter your percentage : 50
//Grade F

