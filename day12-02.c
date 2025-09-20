// Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

#include <stdio.h>
int main () {
int unit,ebill;
printf("Enter the amount of electricity consumed : ");
scanf("%d",&unit);

if ( unit>=1 && unit<=100 ) {
ebill = ( unit * 5 );
printf("Electricity bill : ₹%d\n",ebill);
}

else if ( unit>=101 && unit<=200 ) {
ebill = (( unit - 100 ) * 7) +500;
printf("Electricity bill : ₹%d\n",ebill);
}

else if ( unit>=201 && unit<=300 ) {
ebill = (( unit - 200) *10) +1200;
printf("Electricity bill : ₹%d\n",ebill);
}

else {
ebill = (( unit -300) *12) +2200;
printf("Electricity bill : ₹%d\n",ebill);
}

return 0;
}

//output
//Enter the amount of electricity consumed : 50
//Electricity bill : ₹250
//Enter the amount of electricity consumed : 150
//Electricity bill : ₹850
//Enter the amount of electricity consumed : 250
//Electricity bill : ₹1700



