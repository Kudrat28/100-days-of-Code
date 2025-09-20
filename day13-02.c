// Write a program to print numbers from 1 to n.

#include <stdio.h>
int main() {
int n;
printf("Enter a number : ");
scanf("%d",&n);

for ( int i=1; i<=n; i++) {
printf("%d ",i);
}
return 0;
}

//output
//Enter a number : 5
//1 2 3 4 5 
//Enter a number : 3
//1 2 3
