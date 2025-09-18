// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main() {
int a,b,c;
printf("Enter the side lengths of the triangle : ");
scanf("%d %d %d",&a,&b,&c);

if ( a==b && a==c && b==c ) {
printf("Equilateral\n");
}
else if (( a==b && a!=c ) || ( a!=b && a==c)) {
printf("Isosceles\n");
}
else {
printf("Scalene\n");
}
return 0;
}

//output
//Enter the side lengths of the triangle : 3 3 3
//Equilateral
//Enter the side lengths of the triangle : 3 3 4
//Isosceles
//Enter the side lengths of the triangle : 2 3 4
//Scalene

