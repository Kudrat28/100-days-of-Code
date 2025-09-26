// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>
int main () {
int number, first, end, swap, digit, divide;
printf("Enter a number : ");
scanf("%d",&number);

digit = log10(number); 

divide = pow(10,digit) ;

first = number / divide;

number = number % divide;

end = number % 10;

number = number / 10;

swap = end * divide + number * 10 + first;

printf("%d\n",swap);
return 0;
}



