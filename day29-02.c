// Find the maximum and minimum element in an array..

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements : ", n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0], min = arr[0];

    for ( int i=0; i<n; i++) {
        if ( arr[i] > max)
        max = arr[i];
        if ( arr[i] < min)
        min = arr[i];
        
    }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
    
}

/*
output
Enter the number of elements in the array : 5
Enter 5 elements : 2 9 1 4 7
Max = 9
Min = 1
*/