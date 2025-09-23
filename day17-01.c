// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main() {
int n, dig, sum=0, og;
printf("Enter a number : ");
scanf("%d",&n);

og=n;

while ( n>0) {
dig=n%10;
sum+= dig * dig * dig;
n = n / 10;
}

if ( sum == og ) {
printf("Armstrong\n");
}
else {
printf("Not armstrong\n");
}
return 0;
}

//output
//Enter a number : 153
//Armstrong
//Enter a number : 123
//Not armstrong

