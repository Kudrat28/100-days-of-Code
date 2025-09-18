//write a program to input time in seconds and convert it into hours:minutes:seconds format ...

#include <stdio.h>
int main () {
int time,hours,minutes,seconds;
printf("Enter time in seconds : ");
scanf("%d",&time);

hours = time / 3600;
minutes = ( time % 3600 ) / 60;
seconds = time % 60;

printf("time is %d:%d:%d\n", hours , minutes , seconds );
return 0;
}


//output
//Enter time in seconds : 3661
//time is 1:1:1



