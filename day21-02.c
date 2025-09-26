// Write a program to check if a number is a perfect number.

#include <stdio.h>
int main() {
int n, i, sum=0;
printf("Enter a number : ");
scanf("%d",&n);

for ( i=1; i<n; i++ )
{
if ( n%i == 0 ) {
sum = sum + i;
}
}
if ( sum==n ) {
printf("Perfect number\n");
}
else {
printf("Not perfect number\n");
}

return 0;
}

//output
//Enter a number : 6
//Perfect number
//Enter a number : 10
//Not perfect number
