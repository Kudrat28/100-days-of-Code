// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main() {
int n, product=1;
printf("Enter a number : ");
scanf("%d",&n);

for ( int i=2; i<=n; i=i+2) {
product =  ( product * i );
}

printf("Product of even numbers is : %d\n",product);
return 0;
}

//output
//Enter a number : 4
//Product of even numbers is : 8
//Enter a number : 6
//Product of even numbers is : 48

