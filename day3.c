//write a program to convert temperature from celsius to farenheit....

#include <stdio.h>
int main() {
float celsius,farenheit;
printf("Enter temperature in celsius : ");
scanf("%f",&celsius);

farenheit=celsius*(9.0/5.0)+32;
printf("The temperature in farenheit will be %f\n",farenheit);

return 0;
}

//output
//Enter temperature in celsius : 0
//The temperature in farenheit will be 32.000000

