//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main () {
int n;
printf("Enter the number of terms : ");
scanf("%d",&n);

double sum = 0.0;

if ( n>= 1 ) {
sum += 1.0;
}


for ( int i=1; i<=n; i++ ) {
sum += (double) (2*i-1)/(2*i);
}
printf("Approximate sum : %.1f\n",sum);

return 0;
}

//output
//Enter the number of terms : 3
//Approximate sum : 3.1
//Enter the number of terms : 5
//Approximate sum : 4.9


