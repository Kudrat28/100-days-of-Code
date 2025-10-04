// Count positive, negative, and zero elements in an array.

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

    int positive=0, negative=0, zero=0;

    for ( int i=0; i<n; i++) {
        if ( arr[i] > 0) {
            positive += 1;
        }
        else if ( arr[i] < 0 ) {
            negative += 1;
        }
        else {
            zero += 1;
        }

    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d\n", zero);

    return 0;
}

/*
output
Enter the number of elements in a array : 5
Enter 5 elements : -1 0 1 2 -2
Positive = 2
Negative = 2
Zero = 1
*/