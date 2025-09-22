// Write a program to reverse a given number.

#include <stdio.h>
int main() {
int n,rev=0,rem;
printf("Enter a number : ");
scanf("%d",&n);

while ( n!=0 ) {
rem = n % 10;
rev = rev * 10 + rem;
n = n / 10;
}
printf("Reversed is %d\n",rev);
return 0;
}

//output
//Enter a number : 1234
//Reversed is 4321
//Enter a number : 100
//Reversed is 1
