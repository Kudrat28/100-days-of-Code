// Reverse an array without taking extra space.

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

    int start=0, end=n-1;

    while( start < end )  {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*Enter the number of elements in a array : 4
Enter 4 elements : 1 2 3 4
4 3 2 1 
*/



