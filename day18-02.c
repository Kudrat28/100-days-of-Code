// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main() {
int a, b;
printf("Enter two numbers : ");
scanf("%d %d", &a, &b);

while ( a!=b ) {
if ( a>b ) 
a = a - b;

else 
b = b - a;
}
printf("%d\n",a);
return 0;
}

//output
//Enter two numbers : 12 18
//6
//Enter two numbers : 7 9
//1



