// Write a program to implement a basic calculator using switch-case for +, -, *, /, %....

#include <stdio.h>
int main() {
char op;
int a,b;
printf("Enter two numbers and a operator : ");
scanf("%d %d %c", &a , &b , &op);

switch (op) {
case '+':
printf("%.2d\n",a+b);
break;
case '-':
printf("%.2d\n",a-b);
break;
case '*':
printf("%.2d\n",a*b);
break;
case '/':
printf("%.2d\n",a/b);
break;
case '%':
printf("%.2d\n",a%b);
break;
default :
printf("Invalid input\n");
}
return 0;
}

//output
//Enter two numbers and a operator : 4 2 +
//06
//Enter two numbers and a operator : 10 3 %
//01
//Enter two numbers and a operator : 15 5 /
//03

