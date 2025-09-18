//write a program to calculate the area and circumference of a circle given its radius...

#include <stdio.h>
int main () {
float radius,area,circumference;
printf("Enter the radius of the circle : ");
scanf("%f",&radius);

area=3.1415*radius*radius;
printf("Area of circle is : %f\n",area);

circumference=2*3.1415*radius;
printf("Circumference of circle is %f\n",circumference);

return 0;
}

//output:
//Enter the radius of the circle : 7
//Area of circle is : 153.933502
//Circumference of circle is 43.980999

