#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements : ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter size of subarray : ");
    scanf("%d", &k);

    for ( int i=0; i<=n-k; i++) {
        int found = 0;
        
            for (int j=i; j<k+i; j++) {
                if ( arr[j] < 0 ) {
                printf("%d ", arr[j]);
                found = 1;
                break;
                 
            }
        }

        if (!found)
        printf("0 ");
    }
    return 0;

}

/*
Enter size of array : 5
Enter the elements : -8 2 3 -6 10
Enter size of subarray : 2
-8 0 -6 -6 
*/