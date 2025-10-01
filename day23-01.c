// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main() {
int n;
printf("Enter the number of terms : ");
scanf("%d",&n);

double sum = 0.0;

for ( int i=1; i<=n; i++ ) {
sum += (double) (2*i) / (( 4 * i) -1 );
}

printf("Approximate sum : %.1f\n",sum);
return 0;
}

//output
//Enter the number of terms : 3
//Approximate sum : 1.8
//Enter the number of terms : 5
//Approximate sum : 2.8

