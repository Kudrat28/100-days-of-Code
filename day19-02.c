// Write a program to find the sum of digits of a number.

#include <stdio.h>
int main () {
int n,sum=0,dig;
printf("Enter a number : ");
scanf("%d",&n);

while ( n!=0 ) {
dig = n % 10;
sum += dig;
n =n /10;
}
printf("%d\n",sum);
return 0;
}

//output
//Enter a number : 123
//6
//Enter a number : 999
//27

