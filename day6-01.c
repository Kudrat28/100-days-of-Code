//write a program to input an integer and check whether it is even or odd using if-else...

#include <stdio.h>
int main() {
int n;
printf("Enter a number : ");
scanf("%d",&n);

if ( n%2 == 0) {
printf("%d is even\n",n);
}
else {
printf("%d is odd\n",n);
}

return 0;
}

//output
//Enter a number : 7
//7 is odd
//Enter a number : 12
//12 is even

