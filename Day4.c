//write a program to find and display the sum of first n natural numbers...

#include <stdio.h>
int main() {
int n,sum=0;

printf("enter a number : ");
scanf("%d",&n);

if ( n<=0) {
printf("enter a valid natural number ");
}

for (int i=1; i<=n ; i++) {
sum=sum+i;
}
printf("sum is %d\n",sum);
return 0;
}

//output
//enter a number : 5
//sum is 15

