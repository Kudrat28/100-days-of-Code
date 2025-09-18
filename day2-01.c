//write a program to calculate the area and perimeter of a rectangle given its length and breadth...

#include <stdio.h>
int main () {
float len,br,area,perimeter;
printf("enter the length : ");
scanf("%f %f",&len,&br);

area=len*br;
printf("Area of rectangle is %f\n",area);

perimeter=2*(len+br);
printf("Perimeter of rectangle is %f\n",perimeter);

return 0;
}

//output
//enter the length : 10
//5
//Area of rectangle is 50.000000
//Perimeter of rectangle is 30.000000

