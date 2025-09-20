// Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

 
#include <stdio.h>
int main () {
int ltdays, lbfine;
printf("Enter the number of days you were late : ");
scanf("%d",&ltdays);

if ( ltdays >= 1 && ltdays <=5 ) {
lbfine = (ltdays * 2);
printf("Library fine : ₹%d\n",lbfine);
}

else if ( ltdays >=6 && ltdays <=10 ) {
lbfine = (ltdays * 4) -10;
printf("Library fine : ₹%d\n",lbfine);
}

else if ( ltdays >=11 && ltdays <=30 ) {
lbfine = (ltdays * 6) -30;
printf("Library fine : ₹%d\n",lbfine);
}

else {
printf("Membership Cancelled\n");
}

return 0;
}

//output
//Enter the number of days you were late : 4
//Library fine : ₹8
//Enter the number of days you were late : 8
//Library fine : ₹22
//Enter the number of days you were late : 15
//Library fine : ₹60
//Enter the number of days you were late : 31
//Membership Cancelled
