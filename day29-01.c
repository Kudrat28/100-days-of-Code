// Find the sum of array elements.

#include <stdio.h>
int main() {
    int n, sum=0;
    printf("Enter the number of elements in a array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements : ", n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++) {
        sum = sum + arr[i];
    }

    printf("%d\n",sum);
    return 0;
}

/*output
Enter 4 elements : 2 4 6 8
20 */