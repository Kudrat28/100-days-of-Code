// Write a program to check if a number is a strong number.

#include <stdio.h>

int fact(int dig);

int main () {
int n, dig, og, sum=0;
printf("Enter a number : ");
scanf("%d",&n);

og = n;

while (n) {
dig = n % 10;
sum = sum + fact(dig);
n = n / 10;
}

if ( og == sum ) {
printf("Strong number\n");
}
else {
printf("Not a strong number\n");
}

return 0;
}

int fact(int dig) {

int factorial = 1;
for (  int i=1; i<=dig; i++ ) {
factorial = (factorial * i) ;
}

return factorial;
}


//output
//Enter a number : 145
//Strong number
//Enter a number : 123
//Not a strong number

