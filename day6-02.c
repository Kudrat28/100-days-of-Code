//write a program to input an integer and check whether it is positive, negative or zero using nested if-else...

#include <stdio.h>
int main () {
int n;
printf("Input : ");
scanf("%d",&n);

if ( n >= 0 ) {
if ( n==0 ) {
printf("Zero\n");
}
else {
printf("Positive\n");
}
}
else {
printf("Negative\n");
}
return 0;
}

//output
//Input : -5
//Negative
//Input : 0
//Zero
//Input : 10
//Positive


