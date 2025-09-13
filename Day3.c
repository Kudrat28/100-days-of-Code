//write a program to swap numbers using a third variable....

#include <stdio.h>
int main() {
int a,b,temp;
printf("Enter two numbers : ");
scanf("%d %d",&a,&b);

temp=a;
a=b;
b=temp;

printf("After swap :  %d %d ",a,b);

return 0;
}

//output
//Enter two numbers : 3 5
//After swap :  5 3
