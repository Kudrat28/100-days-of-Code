// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main() {
double a,b,c,discriminant,r1,r2;
printf("Enter the coefficients : ");
scanf("%lf %lf %lf",&a,&b,&c);

discriminant = (b*b-4*a*c);

if ( discriminant > 0 ) {
r1 = ((-b + sqrt(discriminant)) / 2*a );
r2 = ((-b - sqrt(discriminant)) / 2*a );
printf("Roots are real and different %.0f %.0f\n",r1,r2);
}

else if ( discriminant == 0 ) {
r1 = ( -b / 2*a );
printf("Roots are real and equal %.0f\n",r1);
}

else {
printf("roots are complex\n");
}

return 0;
}

//output
//Enter the coefficients : 1 -3 2
//Roots are real and different 2 1
//Enter the coefficients : 1 -2 1
//Roots are real and equal 1
//Enter the coefficients : 1 2 5
//roots are complex

