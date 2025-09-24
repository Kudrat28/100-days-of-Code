// Write a program to print all factors of a given number.

#include <stdio.h>
int main() {
int n, i;
printf("Enter a number : ");
scanf("%d",&n);

for ( i=1; i<=n; i++ ) {
if ( n % i == 0 ) {
printf("%d ",i); }
}
return 0;
}

//output
//Enter a number : 6
//1 2 3 6
//Enter a number : 10
//1 2 5 10
