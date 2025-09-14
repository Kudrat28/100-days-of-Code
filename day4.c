//write a program to swap two numbers without using a third variable

#include <stdio.h>
int main() {
int a,b;
printf("Enter two numbers : ");
scanf("%d %d",&a,&b);

a=a+b;
b=a-b;
a=a-b;

printf("After swap : %d %d\n",a,b);
return 0;
}


//output
//Enter two numbers : 10 20
//After swap : 20 10

