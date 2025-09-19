// Write a program to find profit or loss percentage given cost price and selling price...

#include <stdio.h>
int main() {
float cp,sp,profit,loss,perc;
printf("Enter the cost price and the selling price ");
scanf("%f %f",&cp,&sp);

if ( cp < sp ) {
profit = ( sp - cp );
perc = ( profit / cp ) * 100;
printf("Profit , %.2f%% \n",perc);
}

else if ( cp > sp ) {
loss = ( cp - sp );
perc = ( loss / cp ) * 100;
printf("Loss , %.2f%% \n",perc);
}
else {
printf("No profit No loss\n");
}
return 0;
}

//output
//Enter the cost price and the selling price 1000 1200
//Profit , 20.00% 
//Enter the cost price and the selling price 1000 800
//Loss , 20.00% 
//Enter the cost price and the selling price 1000 1000
//No profit No loss

