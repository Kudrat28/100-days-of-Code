// Find the second largest element in an array.

#include <stdio.h>
int main() {
    int n, pos;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements : ",n);
    for ( int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondlargest = -1e9;

    for ( int i =1; i<n; i++) 
    {
        if ( arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        }
    }

    printf("%d", secondlargest);
    return 0;
}

/*Enter size of array : 5
Enter 5 elements : 10 20 30 40 50
40
*/
