// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main() {
int n,sum=0;
printf("Enter a number : ");
scanf("%d",&n);

for ( int i=1; i<=n; i=i+2 ) {
sum=sum+i;
}
printf("Sum is %d\n",sum);

return 0;
}

//output
//Enter a number : 5
//Sum is 9

