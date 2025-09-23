// Write a program to check if a number is prime.


#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  

    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}

//output
//Enter a number: 7
//Prime
//Enter a number: 10
//Not prime





