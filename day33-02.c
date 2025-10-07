// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main() {
    int n, i, num, pos;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n+1];

    printf("Enter elements in ascending order : ");
    for ( i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Input number to insert : ");
    scanf("%d", &num);

    pos = n;

    for (i=0; i<n; i++) {
        if (num < arr[i]) {
            pos = i;
            break;
        }
    }

    for (i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = num;

    for (i=0; i<=n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*Enter size of array : 5
Enter elements in ascending order : 1 2 4 5 6
Input number to insert : 3
1 2 3 4 5 6 
*/