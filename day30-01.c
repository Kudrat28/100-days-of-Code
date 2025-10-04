// Count even and odd numbers in an array.

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in a array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements : ", n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int even=0, odd=0;

    for ( int i=0; i<n; i++) {
        if ( arr[i] % 2 == 0) {
            even = even + 1;
        }
        else {
            odd = odd + 1;
        }

    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);
    return 0;
}

/*
output
Enter 6 elements : 1 2 3 4 5 6
Even = 3
Odd = 3
Enter the number of elements in a array : 4
Enter 4 elements : 2 4 6 8
Even = 4
Odd = 0
*/