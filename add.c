//Write a program to input two numbers and display their sum


#include <stdio.h>

int sum(int a,int b);

int main() {
int a,b;

printf("Enter a number : ");
scanf("%d",&a);
printf("Enter a number : ");
scanf("%d",&b);

int s=sum(a,b);
printf("Sum = %d\n ",s);
return 0;
}
int sum(int a,int b) {
return a+b;
}
