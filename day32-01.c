// Merge two arrays.

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in a array : ");
    scanf("%d", &n);

    int arr1[n];

    printf("Enter %d elements : ", n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr1[i]);
    }

    
    int m;
    printf("Enter the number of elements in a array : ");
    scanf("%d", &m);

    int arr2[m];

    printf("Enter %d elements : ", m);
    for (int i=0; i<m; i++) {
        scanf("%d", &arr2[i]);
    }

    int merge[n+m];

    for (int i=0; i<n; i++ ) {
        merge[i] = arr1[i];
    }

    for ( int i=0; i<m; i++ ) {
        merge[n+i] = arr2[i];
    }

    for ( int i=0; i< n+m; i++) {
        printf("%d ", merge[i]);
    }

    return 0;
}

/*Enter the number of elements in a array : 3
Enter 3 elements : 1 2 3
Enter the number of elements in a array : 2
Enter 2 elements : 4 5
1 2 3 4 5 
*/

