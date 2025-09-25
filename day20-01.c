// Write a program to find the product of odd digits of a number...

#include <stdio.h>
int main() {
int n, product=1, oddig=0, dig;
printf("Enter a number : ");
scanf("%d",&n);

while ( n > 0 ) {
dig = n % 10;
if ( dig % 2!=0 ) {
product *= dig;
oddig = 1;
}
n /=10;
}

printf("%d\n",product);
return 0;
}

//output
//Enter a number : 12345
//15
//Enter a number : 2468
//1

