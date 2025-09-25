// Write a program to find the LCM of two numbers.

#include <stdio.h>
int main () {
int a,b,lcm;
printf("Enter two numbers : ");
scanf("%d %d",&a,&b);

if ( a>b )
lcm =a;
else
lcm =b;

while(1) {
if ( lcm % a== 0 && lcm % b == 0 ) {
printf("%d\n",lcm);
break;
}
lcm++;
}
return 0;
}

//output
//Enter two numbers : 4 5
//20
//Enter two numbers : 7 3
//21

