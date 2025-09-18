//write a program to input two numbers and display their sum , difference , product and quotient.

#include <stdio.h>
int main () {
float a,b;
printf("enter first number : ");
scanf("%f",&a);
printf("enter second number : ");
scanf("%f",&b);

printf("Sum is %.2f\n",a+b);
printf("difference is %.2f\n",a-b);
printf("product is %.2f\n",a*b);

if ( b!=0 ) {
printf("Quotient is %.2f\n",a/b);
} else {
printf("Undefined");
}

return 0;
}

//output
//enter first number : 10
//enter second number : 20
//Sum is 30.00
//difference is -10.00
//product is 200.00
//Quotient is 0.50

