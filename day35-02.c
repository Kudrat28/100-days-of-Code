// Rotate an array to the right by k positions.

#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements : ",n);
    for ( int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k : ");
    scanf("%d", &k);
    k = k % n;

    int result[n];

    for (int i=0; i<k; i++) {
        result[i] = arr[n-k+i];

    }

    for (int i=k; i<n; i++) {
        result[i] = arr[i-k];
    }

    for (int i=0; i<n; i++) {
        printf("%d ", result[i]);
    }


    return 0;
}

/*Enter size of array : 5
Enter 5 elements : 1 2 3 4 5
Enter value of k : 2
4 5 1 2 3 
*/
    
