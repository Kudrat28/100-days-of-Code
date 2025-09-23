// Write a program to check if a number is a palindrome.

#include <stdio.h>
int main () {
int n, rev=0, dig, temp;
printf("Enter a number : ");
scanf("%d",&n);

temp = n;

while (n>0) {
dig= n % 10;
rev= rev*10 + dig;
n = n/10;
}

if ( temp==rev )
{
printf("Palindrome\n");
}
else {
printf("Not palindrome\n");
}
return 0;
}

//output
//Enter a number : 121
//Palindrome
//Enter a number : 123
//Not palindrome

