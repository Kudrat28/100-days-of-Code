//write a program to calculate simple and compound interest for given principal , rate and time.....

#include <stdio.h>
#include <math.h>
int main () {
float time , rate , principal , simple_int , compound_int;

printf("Enter the principal amount : ");
scanf("%f",&principal);

printf("Enter the time in yrs : ");
scanf("%f",&time);

printf("Enter the interest rate : ");
scanf("%f",&rate);

simple_int= ( principal*rate*time / 100 ) ;
printf("Simple interest is %f\n",simple_int);

compound_int= ( principal * pow(( 1 + rate/100 ),time) - principal );
printf("Compound Interest is %f\n",compound_int);

return 0;
}

//output
//Enter the principal amount : 1000
//Enter the time in yrs : 2
//Enter the interest rate : 5
//Simple interest is 100.000000
//Compound Interest is 102.499901


